/**
 * Toets.hpp
 *
 *  Created on: 21 okt. 2016
 *      Author: Kevin Taartmans
 */

#ifndef TOETS_HPP_
#define TOETS_HPP_

#include <vector>

#include "Vraag.hpp"


class Onderwerp;

class Toets
{
public:
	Toets(const Onderwerp& o);
	virtual ~Toets();
	Vraag& getVraag();
private:
	std::vector<Vraag> toetsVragen;
};

#endif /* TOETS_HPP_ */
