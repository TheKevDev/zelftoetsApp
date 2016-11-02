/**
 * OpenVraag.hpp
 *
 *  Created on: 21 okt. 2016
 *      Author: Kevin Taartmans
 */

#ifndef OPENVRAAG_HPP_
#define OPENVRAAG_HPP_

#include <vector>
#include <string>

#include "Vraag.hpp"

class OpenVraag:public Vraag
{
public:
	OpenVraag(const std::string& aVraag,unsigned char aComplexiteit,const std::vector<std::string>& deKernwoorden);
	virtual ~OpenVraag();
	/*virtual*/ bool beantwoordVraag(std::string antwoord);
	/*virtual*/ std::string correcteAntwoord();
private:
	std::vector<std::string> kernwoorden;
};

#endif /* OPENVRAAG_HPP_ */
