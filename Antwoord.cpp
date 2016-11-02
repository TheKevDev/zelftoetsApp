/**
 * Antwoord.cpp
 *
 *  Created on: 21 okt. 2016
 *      Author: Kevin Taartmans
 */

#include "Antwoord.hpp"

Antwoord::Antwoord(Keuzes anID, const std::string& aAntwoord, bool aCorrect) :
		id(anID), antwoord(aAntwoord), correct(aCorrect)
{
	// TODO Auto-generated constructor stub

}

Antwoord::Antwoord(const Antwoord& a) :
		id(a.id), antwoord(a.antwoord), correct(a.correct)
{
}

Antwoord::~Antwoord()
{
	// TODO Auto-generated destructor stub
}

const Antwoord& Antwoord::operator=(const Antwoord& a)
{
	if (this != &a)
	{
		this->id = a.id;
		this->antwoord = a.antwoord;
		this->correct = a.correct;
	}
	return *this;
}

bool Antwoord::isCorrect() const
{
	return correct;
}

std::string Antwoord::getAntwoord()
{
	return enumConversion.at(id) + ": " + antwoord;
}

std::string Antwoord::getJuisteAntwoord()
{
	return antwoord;
}
