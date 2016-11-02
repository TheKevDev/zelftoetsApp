/**
 * Toets.cpp
 *
 *  Created on: 21 okt. 2016
 *      Author: Kevin Taartmans
 */

#include "Toets.hpp"
#include "Onderwerp.hpp"
#include "Vraag.hpp"


#include <algorithm>    // std::random_shuffle
#include <memory>

Toets::Toets(const Onderwerp& o)
{
	for(unsigned char i = 0; i<5;i++){
		toetsVragen.push_back(new MeerkeuzeVraag(o.getMeerkeuzeVraag(i)));
	}

	for(unsigned char i = 0; i<5;i++){
		toetsVragen.push_back(new OpenVraag(o.getOpenVraag(i)));
	}

	//Shuffle de vector
	//std::random_shuffle (toetsVragen.begin(), toetsVragen.end());
}

Toets::~Toets()
{
}

Vraag* Toets::getVraag()
{
	return toetsVragen.front();
}

void Toets::removeVraag() {
	//std::cout<<toetsVragen.size()<<std::endl;
	toetsVragen.erase(toetsVragen.begin());
	//std::cout<<toetsVragen.size()<<std::endl;
}

unsigned char Toets::aantalVragen() {
	return toetsVragen.size();
}
