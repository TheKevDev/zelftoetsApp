/**
 * Gebruiker.cpp
 *
 *  Created on: 21 okt. 2016
 *      Author: Kevin Taartmans
 */

#include "Gebruiker.hpp"
#include "UserInput.hpp"

Gebruiker::Gebruiker(const std::string& aUsername, const std::string& aWachtwoord)
:username(aUsername),wachtwoord(aWachtwoord),score(0)
{

}

Gebruiker::~Gebruiker()
{
	// TODO Auto-generated destructor stub
}

void Gebruiker::addScore(const char s)
{
	score += s;
}

void Gebruiker::addGebruik(const Vraag& v)
{
	gebruik.push_back(v);
}

std::string Gebruiker::getAntwoordGebruiker()
{
	std::string s;
	std::cout << "Antwoord: ";
	std::getline(std::cin, s);
	return s;
}

void Gebruiker::addSemester(const Semester& s)
{
	beschikbareSemesters.push_back(s);
}

void Gebruiker::gebruikApp()
{
	Semester semesterSelected = selectSemester();
	Course courseSelected = semesterSelected.selectCourse();
	Onderwerp onderwerpSelected = courseSelected.selectOnderwerp();
	doeToets(onderwerpSelected);
	std::cout << "Het programma wordt nu afgesloten." << std::endl;
}

Semester& Gebruiker::selectSemester() {
	std::cout << std::endl << "Kies een semester uit de lijst:" << std::endl;
		unsigned short tmpCounter = 0;
		for (Semester& semester : beschikbareSemesters)
		{
			std::cout << tmpCounter << ": " << semester.getNaam() << std::endl;
			++tmpCounter;
		}
		std::string userInput = UserInput::getUserInput().getInputFromUser("Semesternummer: ");

	return beschikbareSemesters.at(stoi(userInput));
}


void Gebruiker::doeToets(Onderwerp& o)
{
	unsigned long toetsPunten = 0;
	std::vector<Vraag*> gesteldeVragen;
	std::vector<std::string> gegevenAntwoorden;
	o.maakToets();
	while(o.getToets()->aantalVragen() != 0)
	{
		std::cout << std::endl;
		std::cout << o.getToets()->getVraag()->getVraagString() << std::endl;
		addGebruik(*o.getToets()->getVraag());
		gesteldeVragen.push_back(o.getToets()->getVraag());
		std::string s = getAntwoordGebruiker();
		gegevenAntwoorden.push_back(s);
		if(o.getToets()->getVraag()->beantwoordVraag(s))
		{
			addScore(o.getToets()->getVraag()->getComplexiteit());
			toetsPunten += o.getToets()->getVraag()->getComplexiteit();
		}
		o.getToets()->removeVraag();
	}
	std::cout << "De toets is klaar." << std::endl;
	std::cout << "Je hebt " << score << " punten behaald tijdens deze toets." << std::endl;
	std::cout << "Dit brengt je totaalscore op " << score << " punten." << std::endl;
	std::cout << "Wil je de toets inzien? (ja/nee)" << std::endl;
	std::string inzien;
	std::getline(std::cin, inzien);
	if (inzien == "ja" || inzien == "Ja")
	{
		for (unsigned char i = 0; i < gesteldeVragen.size(); i++)
		{
			std::cout << "Vraag " << i + 1 << ": " << gesteldeVragen.at(i)->getVraagString() << std::endl;
			std::cout << "Gegegeven antwoord: " << gegevenAntwoorden.at(i) << std::endl;
			std::cout << "Correcte antwoord: " << gesteldeVragen.at(i)->correcteAntwoord() << std::endl;
			std::cout << std::endl;
		}
	}
}

const std::string& Gebruiker::getUsername() const
{
	return username;
}

Gebruiker::Gebruiker(const Gebruiker& g)
:username(g.username), wachtwoord(g.wachtwoord), score(g.score), beschikbareSemesters(g.beschikbareSemesters), gebruik(g.gebruik)
{
}

const std::string& Gebruiker::getWachtwoord() const
{
	return wachtwoord;
}

const Gebruiker& Gebruiker::operator =(const Gebruiker& g)
{
	if(this!=&g) {
		this->username = g.username;
		this->wachtwoord = g.wachtwoord;
		this->score = g.score;
		this->beschikbareSemesters = g.beschikbareSemesters;
		this->gebruik = g.gebruik;
	}
	return *this;
}
