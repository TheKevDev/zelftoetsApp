/**
 * Onderwerp.hpp
 *
 *  Created on: 21 okt. 2016
 *      Author: Kevin Taartmans
 */

#ifndef ONDERWERP_HPP_
#define ONDERWERP_HPP_

#include <string>

#include "Toets.hpp"

class Toets;

class Onderwerp
{
public:
	Onderwerp(const std::string& aNaam,	unsigned short aOnderwerpID);
	virtual ~Onderwerp();
	Toets maakToets();
	void addMeerkeuzeVraag();
	void addOpenVraag();
private:
	std::string naam;
	long onderwerpID;
};

#endif /* ONDERWERP_HPP_ */
