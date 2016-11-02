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
	Onderwerp(const Onderwerp& o);
	virtual ~Onderwerp();
	/**
	 * Functie die een toets aanmaakt.
	 */
	void maakToets();
	/**
	 * Functie die een meerkeuzevraag in de meerkeuzevraag-vector stopt
	 * @param aVraag een meerkeuzevraag
	 */
	void addMeerkeuzeVraag(const MeerkeuzeVraag& aVraag);
	/**
	 * Functie die een openvraag in de openvraag-vector stopt
	 * @param aVraag een openvraag
	 */
	void addOpenVraag(const OpenVraag& aVraag);
	/**
	 * Functie die een bepaalde meerkeuzevraag get.
	 * Wanneer de index niet bestaat wordt het eerste element van de vector returned
	 * @param index van de opgevraagde meerkeuzevraag
	 * @return een meerkeuzevraag
	 */
	const MeerkeuzeVraag& getMeerkeuzeVraag(unsigned short index) const;
	/**
	 * Functie die een bepaalde openvraag get.
	 * Wanneer de index niet bestaat wordt het eerste element van de vector returned
	 * @param index van de opgevraagde openvraag
	 * @return een openvraag
	 */
	const OpenVraag& getOpenVraag(unsigned short index) const;
	/**
	 * Functie die de pointer naar de toets teruggeeft
	 * @return pointer naar de toets
	 */
	Toets* getToets() const;

	//GETTERS AND SETTERS
	const std::string& getNaam() const;
	long getOnderwerpId() const;

	//OPERATORS
	const Onderwerp& operator=(const Onderwerp& o);
private:
	std::string naam;
	long onderwerpID;
	std::vector<MeerkeuzeVraag> meerkeuzeVragen;
	std::vector<OpenVraag> openVragen;
	Toets* toets;
};

#endif /* ONDERWERP_HPP_ */
