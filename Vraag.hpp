/**
 * Vraag.hpp
 *
 *  Created on: 21 okt. 2016
 *      Author: Kevin Taartmans
 */

#ifndef VRAAG_HPP_
#define VRAAG_HPP_

#include <string>
#include "IVraag.hpp"

class Vraag:public IVraag
{
public:
	Vraag(const std::string& aVraag,unsigned char aComplexiteit);
	Vraag(const Vraag& v);
	virtual ~Vraag();
	void printVraag();
	/*virtual*/ std::string& getVraag();
	/*virtual*/ bool beantwoordVraag(std::string antwoord){return false;};
	const Vraag& operator=(const Vraag& v);
private:
	std::string vraag;
	unsigned char complexiteit;
};

#endif /* VRAAG_HPP_ */
