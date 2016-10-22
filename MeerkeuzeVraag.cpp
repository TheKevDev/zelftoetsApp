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
}

MeerkeuzeVraag::MeerkeuzeVraag(const MeerkeuzeVraag& m)
:Vraag(m),antwoordenLijst(m.antwoordenLijst)
{
}

MeerkeuzeVraag::~MeerkeuzeVraag()
{
	// TODO Auto-generated destructor stub
}

const MeerkeuzeVraag& MeerkeuzeVraag::operator=(const MeerkeuzeVraag& m){
	if(this!=&m){
		Vraag::operator=(m);
		this->antwoordenLijst = m.antwoordenLijst;
	}
	return *this;
}

bool MeerkeuzeVraag::beantwoordVraag(std::string antwoord){
	return antwoordenLijst.at(stoi(antwoord)).isCorrect();
}
