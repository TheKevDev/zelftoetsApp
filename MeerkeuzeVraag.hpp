/**
 * MeerkeuzeVraag.hpp
 *
 *  Created on: 21 okt. 2016
 *      Author: Kevin Taartmans
 */

#ifndef MEERKEUZEVRAAG_HPP_
#define MEERKEUZEVRAAG_HPP_

#include <string>
#include <vector>

#include "Vraag.hpp"
#include "Antwoord.hpp"

class MeerkeuzeVraag:public Vraag
{
public:
	MeerkeuzeVraag(const std::string& aVraag,unsigned char aComplexiteit,const std::vector<Antwoord>& aAntwoordenLijst);
	virtual ~MeerkeuzeVraag();
	/*virtual*/ std::string& getVraag();
	/*virtual*/ bool beantwoordVraag(std::string antwoord);
	MeerkeuzeVraag(const MeerkeuzeVraag& m);
	const MeerkeuzeVraag& operator=(const MeerkeuzeVraag& m);
private:
	std::vector<Antwoord> antwoordenLijst;
	std::string mkVraag = "";
};

#endif /* MEERKEUZEVRAAG_HPP_ */
