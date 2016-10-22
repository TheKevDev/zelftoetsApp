/**
 * MeerkeuzeVraag.cpp
 *
 *  Created on: 21 okt. 2016
 *      Author: Kevin Taartmans
 */

#include "MeerkeuzeVraag.hpp"

MeerkeuzeVraag::MeerkeuzeVraag(const std::string& aVraag,unsigned char aComplexiteit,const std::vector<Antwoord>& aAntwoordenLijst)
:Vraag(aVraag,aComplexiteit),antwoordenLijst(aAntwoordenLijst)
{
	// TODO Auto-generated constructor stub

}

MeerkeuzeVraag::~MeerkeuzeVraag()
{
	// TODO Auto-generated destructor stub
}


bool MeerkeuzeVraag::beantwoordVraag(std::string antwoord){
	return false;
}
