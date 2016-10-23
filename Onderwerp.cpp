/**
 * Onderwerp.cpp
 *
 *  Created on: 21 okt. 2016
 *      Author: Kevin Taartmans
 */

#include "Onderwerp.hpp"

#include <iostream>

Onderwerp::Onderwerp(const std::string& aNaam, const unsigned short aOnderwerpID)
:naam(aNaam),onderwerpID(aOnderwerpID),toets(nullptr)
{
	// TODO Auto-generated constructor stub

}

Onderwerp::~Onderwerp()
{
	// TODO Auto-generated destructor stub
}

void Onderwerp::maakToets()
{
	if(toets == nullptr) {
		toets = new Toets (*this);
	}
	else {
		std::cout<<"Error"<<std::endl;
	}
}

void Onderwerp::addMeerkeuzeVraag(const MeerkeuzeVraag& aVraag)
{
	meerkeuzeVragen.push_back(aVraag);

}

void Onderwerp::addOpenVraag(const OpenVraag& aVraag)
{
	openVragen.push_back(aVraag);
}

const MeerkeuzeVraag& Onderwerp::getMeerkeuzeVraag() const
{
	return meerkeuzeVragen.front();
}

const OpenVraag& Onderwerp::getOpenVraag() const
{
	return openVragen.front();
}


Toets* Onderwerp::getToets() const
{
	return toets;
}
