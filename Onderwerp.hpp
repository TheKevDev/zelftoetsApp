/**
 * Onderwerp.hpp
 *
 *  Created on: 21 okt. 2016
 *      Author: Kevin Taartmans
 */

#ifndef ONDERWERP_HPP_
#define ONDERWERP_HPP_

#include <string>
#include <vector>

#include "Toets.hpp"

//class Toets;

class Onderwerp
{
public:
	Onderwerp(const std::string& aNaam, const unsigned short aOnderwerpID);
	virtual ~Onderwerp();
	Toets maakToets();
	void addMeerkeuzeVraag(const Vraag& aVraag);
	void addOpenVraag(const Vraag& aVraag);
private:
	std::string naam;
	long onderwerpID;
	std::vector<Vraag> meerkeuzeVragen;
	std::vector<Vraag> openVragen;
};

#endif /* ONDERWERP_HPP_ */
