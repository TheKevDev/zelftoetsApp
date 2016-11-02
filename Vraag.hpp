/**
 * Vraag.hpp
 *
 *  Created on: 21 okt. 2016
 *      Author: Kevin Taartmans
 */

#ifndef VRAAG_HPP_
#define VRAAG_HPP_

#include <string>
#include <iostream>
#include "IVraag.hpp"

class Vraag:public IVraag
{
public:
	Vraag(const std::string& aVraag,unsigned char aComplexiteit);
	Vraag(const Vraag& v);
	virtual ~Vraag();
	virtual std::string& getVraagString();
	virtual bool beantwoordVraag(std::string antwoord){return false;};
	virtual std::string correcteAntwoord() {return "";};
	const Vraag& operator=(const Vraag& v);
	unsigned char getComplexiteit() const;

private:
	std::string mkVraag;
	unsigned char complexiteit;
};

#endif /* VRAAG_HPP_ */
