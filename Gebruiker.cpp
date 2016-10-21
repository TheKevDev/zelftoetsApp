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

/**
 * Functie voegt de aantal gescoorde punten toe.
 */
void Gebruiker::addScore()
{
}

/**
 * Functie voegt de vraag die beantwoord is door de gebruiker toe aan zijn gebruik
 */
void Gebruiker::addGebruik()
{
}

/**
 * Functie die de input van de gebruiker inleest.
 * @return De input van de gebruiker
 */
std::string Gebruiker::getAntwoordGebruiker()
{
	return "";
}

/**
 *
 */
void Gebruiker::gebruikApp()
{
}
