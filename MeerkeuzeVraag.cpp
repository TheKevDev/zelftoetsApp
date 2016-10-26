/**
 * MeerkeuzeVraag.cpp
 *
 *  Created on: 21 okt. 2016
 *      Author: Kevin Taartmans
 */

#include "MeerkeuzeVraag.hpp"
#include <exception>

MeerkeuzeVraag::MeerkeuzeVraag(const std::string& aVraag, unsigned char aComplexiteit, const std::vector<Antwoord>& aAntwoordenLijst) :
		Vraag(aVraag, aComplexiteit), antwoordenLijst(aAntwoordenLijst)
{
}

MeerkeuzeVraag::MeerkeuzeVraag(const MeerkeuzeVraag& m) :
		Vraag(m), antwoordenLijst(m.antwoordenLijst)
{
}

MeerkeuzeVraag::~MeerkeuzeVraag()
{
	// TODO Auto-generated destructor stub
}

const MeerkeuzeVraag& MeerkeuzeVraag::operator=(const MeerkeuzeVraag& m)
{
	if (this != &m)
	{
		Vraag::operator=(m);
		this->antwoordenLijst = m.antwoordenLijst;
	}
	return *this;
}

bool MeerkeuzeVraag::beantwoordVraag(std::string antwoord)
{
	std::cout << __PRETTY_FUNCTION__ << std::endl;
	return antwoordenLijst.at(getEnumConversion(antwoord)).isCorrect();
}

std::string& MeerkeuzeVraag::getVraag()
{
	mkVraag = Vraag::getVraag();
	mkVraag += '\n';
	for (Antwoord a : antwoordenLijst)
	{
		mkVraag += a.getAntwoord();
		mkVraag += '\n';
	}
	return mkVraag;
}

unsigned short MeerkeuzeVraag::getEnumConversion(const std::string& value) const
{
	if (value == "A" && antwoordenLijst.size() < 4)
	{
		return 0;
	}
	else if (value == "B")
	{
		return 1;
	}
	else if (value == "C" && antwoordenLijst.size() > 2)
	{
		return 2;
	}
	else if (value == "D" && antwoordenLijst.size() > 3)
	{
		return 3;
	}
	else {
		return 0;
	}
}
