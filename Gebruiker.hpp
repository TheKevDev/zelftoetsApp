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
	Gebruiker();
	virtual ~Gebruiker();
	void addScore();
	void addGebruik();
	std::string getAntwoordGebruiker();
	void gebruikApp();
private:
	std::string username;
	std::string wachtwoord;
	long score;
	std::vector<Vraag> gebruik;
};

#endif /* GEBRUIKER_HPP_ */
