/**
 * Toets.hpp
 *
 *  Created on: 21 okt. 2016
 *      Author: Kevin Taartmans
 */

#ifndef TOETS_HPP_
#define TOETS_HPP_

#include <vector>
#include <memory>

#include "Vraag.hpp"


class Onderwerp;

class Toets
{
public:
	Toets(const Onderwerp& o);
	virtual ~Toets();
	/**
	 * Functie verwijderd de eerste vraag uit de toetsvragen-vector
	 */
	void removeVraag();
	/**
	 * Functie die het aantal toetsvragen returned
	 * @return aantal toetsvragen in de vector
	 */
	unsigned char aantalVragen();

	//GETTERS AND SETTERS
	Vraag* getVraag();
private:
	std::vector<Vraag*> toetsVragen;
};

#endif /* TOETS_HPP_ */
