/**
 * IVraag.hpp
 *
 *  Created on: 21 okt. 2016
 *      Author: Kevin Taartmans
 */

#ifndef IVRAAG_HPP_
#define IVRAAG_HPP_

//Forward decleration for the class vraag to avoid a circular dependency
class Vraag;

#include <string>

#include "Vraag.hpp"


class IVraag
{
public:
	virtual ~IVraag() {};
	virtual const std::string& getVraag()=0;
	//virtual bool beantwoordVraag(std::string antwoord)=0;
};

#endif /* IVRAAG_HPP_ */
