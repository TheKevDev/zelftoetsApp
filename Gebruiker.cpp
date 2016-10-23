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
	std::cout<<"Antwoord: ";
	std::cin >> s;
	return s;
}

void Gebruiker::addSemester(const Semester& s)
{
	beschikbareSemesters.push_back(s);
}

void Gebruiker::gebruikApp()
{
	std::cout << "Kies een semester uit de lijst:" << std::endl;
	unsigned short tmpCounter = 1;
	for (auto &semester : beschikbareSemesters)
	{
		std::cout << tmpCounter << ": " << semester.getNaam() << std::endl;
		++tmpCounter;
	}
	unsigned short semSelected;
	unsigned long index;
	std::cin >> semSelected;

	auto it = find_if(beschikbareSemesters.begin(), beschikbareSemesters.end(), [&semSelected](const Semester& s) {return s.getSemesterId() == semSelected;});
	if (it != beschikbareSemesters.end())
	{
		index = std::distance(beschikbareSemesters.begin(), it);
	}
	//NIET AF
}

const std::string& Gebruiker::getUsername() const
{
	return username;
}

const std::string& Gebruiker::getWachtwoord() const
{
	return wachtwoord;
}
