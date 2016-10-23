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

void Gebruiker::addScore()
{
}

void Gebruiker::addGebruik()
{
}

std::string Gebruiker::getAntwoordGebruiker()
{
	std::string s;
	std::cout<<"Antwoord: ";
	std::cin >> s;
	return s;
}

void Gebruiker::gebruikApp()
{
}
