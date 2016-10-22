/**
 * OpenVraag.cpp
 *
 *  Created on: 21 okt. 2016
 *      Author: Kevin Taartmans
 */

#include "OpenVraag.hpp"

OpenVraag::OpenVraag(const std::string& aVraag,unsigned char aComplexiteit,const std::vector<std::string>& deKernwoorden)
:Vraag(aVraag,aComplexiteit),kernwoorden(deKernwoorden)
{

}

OpenVraag::~OpenVraag()
{
	// TODO Auto-generated destructor stub
}

bool OpenVraag::beantwoordVraag(std::string antwoord){
	return false;
}
