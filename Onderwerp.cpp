/**
 * Onderwerp.cpp
 *
 *  Created on: 21 okt. 2016
 *      Author: Kevin Taartmans
 */

#include "Onderwerp.hpp"

Onderwerp::Onderwerp(const std::string& aNaam, const unsigned short aOnderwerpID)
:naam(aNaam),onderwerpID(aOnderwerpID)
{
	// TODO Auto-generated constructor stub

}

Onderwerp::~Onderwerp()
{
	// TODO Auto-generated destructor stub
}

Toets Onderwerp::maakToets()
{
}

void Onderwerp::addMeerkeuzeVraag(const Vraag& aVraag)
{
	meerkeuzeVragen.push_back(aVraag);

}

void Onderwerp::addOpenVraag(const Vraag& aVraag)
{
	openVragen.push_back(aVraag);
}
