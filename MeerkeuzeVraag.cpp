/**
 * MeerkeuzeVraag.cpp
 *
 *  Created on: 21 okt. 2016
 *      Author: Kevin Taartmans
 */

#include "MeerkeuzeVraag.hpp"

MeerkeuzeVraag::MeerkeuzeVraag(const std::string& aVraag,unsigned char aComplexiteit)
:Vraag(aVraag,aComplexiteit)
{
	// TODO Auto-generated constructor stub

}

MeerkeuzeVraag::~MeerkeuzeVraag()
{
	// TODO Auto-generated destructor stub
}

bool MeerkeuzeVraag::isAntwoordCorrect()
{
	return false;
}
