/**
 * MeerkeuzeVraag.hpp
 *
 *  Created on: 21 okt. 2016
 *      Author: Kevin Taartmans
 */

#ifndef MEERKEUZEVRAAG_HPP_
#define MEERKEUZEVRAAG_HPP_

#include <string>

class MeerkeuzeVraag
{
public:
	MeerkeuzeVraag();
	virtual ~MeerkeuzeVraag();
	bool isAntwoordCorrect();
private:
	std::string vraag;
};

#endif /* MEERKEUZEVRAAG_HPP_ */
