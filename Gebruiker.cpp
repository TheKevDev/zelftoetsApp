/**
 * Gebruiker.cpp
 *
 *  Created on: 21 okt. 2016
 *      Author: Kevin Taartmans
 */

#include "Gebruiker.hpp"

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
	std::cout << std::endl << "Kies een semester uit de lijst:" << std::endl;
	unsigned short tmpCounter = 0;
	std::vector<Vraag*> gesteldeVragen;
	std::vector<std::string> gegevenAntwoorden;
	for (Semester& semester : beschikbareSemesters)
	{
		std::cout << tmpCounter << ": " << semester.getNaam() << std::endl;
		++tmpCounter;
	}
	std::string semSelected;
	unsigned long semIndex;
	std::cout << "Semesternummer: ";
	std::getline(std::cin, semSelected);

	auto itSem = find_if(beschikbareSemesters.begin(), beschikbareSemesters.end(), [&semSelected](const Semester& s) {return s.getSemesterId() == stoi(semSelected);});
	if (itSem != beschikbareSemesters.end())
	{
		semIndex = std::distance(beschikbareSemesters.begin(), itSem);

		std::vector<Course> sc = beschikbareSemesters.at(semIndex).getSemesterCourses();
		tmpCounter = 0;
		std::cout << std::endl << "Kies een course uit de lijst:" << std::endl;
		for (Course& course : sc)
		{
			std::cout << tmpCounter << ": " << course.getNaam() << std::endl;
			++tmpCounter;
		}
		std::string courseSelected;
		unsigned long courseIndex;
		std::cout << "Coursenummer: ";
		std::getline(std::cin, courseSelected);

		auto itCourse = find_if(sc.begin(), sc.end(), [&courseSelected](const Course& c) {return c.getCourseId() == stoi(courseSelected);});
		if (itCourse != sc.end())
		{
			courseIndex = std::distance(sc.begin(), itCourse);

			std::vector<Onderwerp> co = sc.at(courseIndex).getCourseOnderwerpen();
			tmpCounter = 0;
			std::cout << std::endl << "Kies een onderwerp uit de lijst:" << std::endl;
			for (Onderwerp& onderwerp : co)
			{
				std::cout << tmpCounter << ": " << onderwerp.getNaam() << std::endl;
				++tmpCounter;
			}
			std::string onderwerpSelected;
			unsigned long onderwerpIndex;
			std::cout << "Onderwerpnummer: ";
			std::getline(std::cin, onderwerpSelected);

			auto itOnderwerp = find_if(co.begin(), co.end(), [&onderwerpSelected](const Onderwerp& o) {return o.getOnderwerpId() == stoi(onderwerpSelected);});
			if (itOnderwerp != co.end())
			{
				onderwerpIndex = std::distance(co.begin(), itOnderwerp);
				std::cout << std::endl;

				unsigned long toetsPunten = 0;
				co.at(onderwerpIndex).maakToets();
				while(co.at(onderwerpIndex).getToets()->aantalVragen() != 0)
				{
					std::cout << std::endl;
					std::cout << co.at(onderwerpIndex).getToets()->getVraag()->getVraagString() << std::endl;
					addGebruik(*co.at(onderwerpIndex).getToets()->getVraag());
					gesteldeVragen.push_back(co.at(onderwerpIndex).getToets()->getVraag());
					std::string s = getAntwoordGebruiker();
					gegevenAntwoorden.push_back(s);
					if(co.at(onderwerpIndex).getToets()->getVraag()->beantwoordVraag(s))
					{
						addScore(co.at(onderwerpIndex).getToets()->getVraag()->getComplexiteit());
						toetsPunten += co.at(onderwerpIndex).getToets()->getVraag()->getComplexiteit();
					}
					co.at(onderwerpIndex).getToets()->removeVraag();
				}
			}
			else
			{
				std::cout << "Voer een geldig onderwerpnummer in" << std::endl;
			}
		}
		else
		{
			std::cout << "Voer een geldig coursenummer in" << std::endl;
		}
	}
	else
	{
		std::cout << "Voer een geldig semesternummer in" << std::endl;
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
	else {
		std::cout << "Het programma wordt nu afgesloten." << std::endl;
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
