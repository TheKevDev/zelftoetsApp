/**
 * Gebruiker.hpp
 *
 *  Created on: 21 okt. 2016
 *      Author: Kevin Taartmans
 */

#ifndef GEBRUIKER_HPP_
#define GEBRUIKER_HPP_

#include <string>
#include <vector>

#include "Vraag.hpp"

class Vraag;

class Gebruiker
{
public:
	Gebruiker(const std::string& aUsername, const std::string& aWachtwoord);
	virtual ~Gebruiker();
	/**
	 * Functie voegt de aantal gescoorde punten toe.
	 */
	void addScore();
	/**
	 * Functie voegt de vraag die beantwoord is door de gebruiker toe aan zijn gebruik
	 */
	void addGebruik();
	/**
	 * Functie die de input van de gebruiker inleest.
	 * @return De input van de gebruiker
	 */
	std::string getAntwoordGebruiker();
	void gebruikApp();
private:
	std::string username;
	std::string wachtwoord;
	unsigned long score;
	std::vector<Vraag> gebruik;
};

#endif /* GEBRUIKER_HPP_ */
