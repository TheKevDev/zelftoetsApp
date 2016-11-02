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
#include <algorithm>
#include <exception>

#include "Vraag.hpp"
#include "Antwoord.hpp"

class MeerkeuzeVraag:public Vraag
{
public:
	MeerkeuzeVraag(const std::string& aVraag,unsigned char aComplexiteit,const std::vector<Antwoord>& aAntwoordenLijst);
	MeerkeuzeVraag(const MeerkeuzeVraag& m);
	virtual ~MeerkeuzeVraag();
	/**
	 * Functie checked of antwoord correct is.
	 * @param antwoord string waarin het antwoord staat
	 * @return boolean. True als antwoord correct is, false als deze fout is.
	 */
	/*virtual*/ bool beantwoordVraag(std::string antwoord);
	/**
	 *
	 * @return
	 */
	/*virtual*/ std::string correcteAntwoord();
	/**
	 * Functie die de vraag string get
	 * @return string waarin de vraag staat en de identifier. bv: A: 100
	 */
	/*virtual*/ std::string getVraagString();

	//OPERATORS
	const MeerkeuzeVraag& operator=(const MeerkeuzeVraag& m);
private:
	/**
	 * Functie die de ingekomen string convert naar de Enum waarde van de Keuzes enum in de Antwoord klasse.
	 * Wanneer de input niet correct is wordt als antwoord A ingevuld.
	 * @param value string met het antwoord
	 */
	unsigned short getEnumConversion(const std::string& value) const;
	std::vector<Antwoord> antwoordenLijst;
};

#endif /* MEERKEUZEVRAAG_HPP_ */
