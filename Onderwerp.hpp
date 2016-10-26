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
#include "MeerkeuzeVraag.hpp"
#include "OpenVraag.hpp"

//class Toets;
class Vraag;

class Onderwerp
{
public:
	Onderwerp(const std::string& aNaam, const unsigned short aOnderwerpID);
	virtual ~Onderwerp();
	void maakToets();
	void addMeerkeuzeVraag(const MeerkeuzeVraag& aVraag);
	void addOpenVraag(const OpenVraag& aVraag);
	const MeerkeuzeVraag& getMeerkeuzeVraag(unsigned short index) const;
	const OpenVraag& getOpenVraag(unsigned short index) const;
	Toets* getToets() const;

private:
	std::string naam;
	long onderwerpID;
	std::vector<MeerkeuzeVraag> meerkeuzeVragen;
	std::vector<OpenVraag> openVragen;
	Toets* toets;
};

#endif /* ONDERWERP_HPP_ */
