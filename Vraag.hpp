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

class Vraag
{
public:
	Vraag(const std::string& aVraag,unsigned char aComplexiteit);
	Vraag(const Vraag& v);
	virtual ~Vraag();

	/**
	 * Functie die de vraag string returned
	 * @return string waarin het attribuut vraag staat
	 */
	virtual std::string getVraagString();
	/**
	 * Functie die controleerd of de gegeven input correct is
	 * @param antwoord ruwe string van de gebruikers input
	 * @return returned true als het antwoord correct is. False als het fout is.
	 */
	virtual bool beantwoordVraag(std::string antwoord){return false;};
	/**
	 *
	 * @return
	 */
	virtual std::string correcteAntwoord() {return "";};

	//GETTERS AND SETTERS
	unsigned char getComplexiteit() const;

	//OPERATOR FUNCTIONS
	const Vraag& operator=(const Vraag& v);
private:
	std::string vraag;
	unsigned char complexiteit;
};

#endif /* VRAAG_HPP_ */
