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
	unsigned long aantalKernWoordenGevonden = 0;
	for(std::string& woord:kernwoorden)
	{
		std::size_t found = antwoord.find(woord);
		if (found!=std::string::npos)
		{
			++aantalKernWoordenGevonden;
		}
	}
	if(aantalKernWoordenGevonden == kernwoorden.size())
	{
		return false;
	}
	return true;
}

std::string OpenVraag::correcteAntwoord()
{
	std::string totaal = "";
	for (std::string k : kernwoorden)
	{
		totaal.append(k);
		totaal.append(" ");
	}
	return totaal;
}
