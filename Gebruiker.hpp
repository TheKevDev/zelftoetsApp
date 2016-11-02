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
#include <iostream>
#include <algorithm>

#include "Vraag.hpp"
#include "Semester.hpp"
#include "Course.hpp"
#include "Onderwerp.hpp"

//class Vraag;

class Gebruiker
{
public:
	Gebruiker(const std::string& aUsername, const std::string& aWachtwoord);
	Gebruiker(const Gebruiker& g);
	virtual ~Gebruiker();
	/**
	 * Functie voegt een semester toe aan de lijst met semesters voor de gebruiker
	 * @param s Een reference naar de semester
	 */
	void addSemester(const Semester& s);
	/**
	 * Functie voegt de aantal gescoorde punten toe.
	 * @param s aantal punten
	 */
	void addScore(const char s);
	/**
	 * Functie voegt de vraag die beantwoord is door de gebruiker toe aan zijn gebruik
	 * @param v reference naar de beantwoorde vraag
	 */
	void addGebruik(const Vraag& v);
	/**
	 * Functie die de input van de gebruiker inleest.
	 * @return De input van de gebruiker
	 */
	std::string getAntwoordGebruiker();
	/**
	 * Functie om de app te gebruiken.
	 */
	void gebruikApp();
	/**
	 *
	 * @param semSelected
	 */
	Semester& selectSemester();
	/**
	 *
	 * @param o
	 */
	void doeToets(Onderwerp& o);

	//GETTERS AND SETTERS
	const std::string& getUsername() const;
	const std::string& getWachtwoord() const;
	//OPERATORS
	const Gebruiker& operator=(const Gebruiker& g);
private:
	std::string username;
	std::string wachtwoord;
	unsigned long score;
	std::vector<Semester> beschikbareSemesters;
	std::vector<Vraag> gebruik;
};

#endif /* GEBRUIKER_HPP_ */
