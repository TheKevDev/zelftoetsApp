/**
 * Gebruiker.cpp
 *
 *  Created on: 21 okt. 2016
 *      Author: Kevin Taartmans
 */

#include "Gebruiker.hpp"

#include <iostream>

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

	std::getline(std::cin, s);
	return s;
}

void Gebruiker::addSemester(const Semester& s)
{
	beschikbareSemesters.push_back(s);
}

void Gebruiker::gebruikApp()
{
	std::cout << "Welkom bij de zelftoetsapplicatie." << std::endl;
	std::cout << "Kies een semester uit de lijst:" << std::endl;
	unsigned short tmpCounter = 1;
	for (auto &semester : beschikbareSemesters)
	{
		std::cout << tmpCounter << ": " << semester.getNaam() << std::endl;
		++tmpCounter;
	}
	unsigned short semSelected;
	std::cin >> semSelected;

	std::cout << semSelected << std::endl;
}
