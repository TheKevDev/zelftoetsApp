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

const MeerkeuzeVraag& Onderwerp::getMeerkeuzeVraag(unsigned short index) const
{
	if(meerkeuzeVragen.size() < index) {
		return meerkeuzeVragen.at(0);
	}else {
		return meerkeuzeVragen.at(index);
	}

}

const OpenVraag& Onderwerp::getOpenVraag(unsigned short index) const
{
	if(openVragen.size() < index) {
		return openVragen.at(0);
	}
	else {
		return openVragen.at(index);
	}

}


Toets* Onderwerp::getToets() const
{
	return toets;
}

Onderwerp::Onderwerp(const Onderwerp& o)
:naam(o.naam), onderwerpID(o.onderwerpID), meerkeuzeVragen(o.meerkeuzeVragen), openVragen(o.openVragen), toets(o.toets)
{
}

const Onderwerp& Onderwerp::operator =(const Onderwerp& o)
{
	if(this!=&o) {
		this->naam = o.naam;
		this->onderwerpID = o.onderwerpID;
		this->meerkeuzeVragen = o.meerkeuzeVragen;
		this->openVragen = o.openVragen;
		this->toets = o.toets;
	}
	return *this;
}

const std::string& Onderwerp::getNaam() const
{
	return naam;
}

long Onderwerp::getOnderwerpId() const
{
	return onderwerpID;
}
