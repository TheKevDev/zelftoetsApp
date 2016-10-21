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
	void addScore();
	void addGebruik();
	std::string getAntwoordGebruiker();
	void gebruikApp();
private:
	std::string username;
	std::string wachtwoord;
	unsigned long score;
	std::vector<Vraag> gebruik;
};

#endif /* GEBRUIKER_HPP_ */
