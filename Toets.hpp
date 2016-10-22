/**
 * Toets.hpp
 *
 *  Created on: 21 okt. 2016
 *      Author: Kevin Taartmans
 */

#ifndef TOETS_HPP_
#define TOETS_HPP_

#include "Vraag.hpp"

class Toets
{
public:
	Toets();
	virtual ~Toets();
	const Vraag& getVraag();
};

#endif /* TOETS_HPP_ */
