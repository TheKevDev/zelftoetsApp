/**
 * Antwoord.hpp
 *
 *  Created on: 21 okt. 2016
 *      Author: Kevin Taartmans
 */

#ifndef ANTWOORD_HPP_
#define ANTWOORD_HPP_

#include <iostream>
#include <string>
#include <map>

class Antwoord
{
public:
	enum Keuzes {A,B,C,D};
	Antwoord(Keuzes anID,const std::string& aAntwoord,bool aCorrect=false);
	Antwoord(const Antwoord& a);
	virtual ~Antwoord();

	/**
	 * Functie geeft een string representatie van het antwoord
	 * @return string waarin het antwoord staat.
	 */
	std::string getAntwoord();

	//GETTERS AND SETTERS
	bool isCorrect() const;

	//OPERATORS
	const Antwoord& operator=(const Antwoord& a);
private:
	Keuzes id;
	std::string antwoord;
	bool correct;

	/**
	 * Deze functie zorgt ervoor dat de enumConversion map gevuld wordt zodat een enum A naar een string A wordt vertaald.
	 * @return een map met de conversie waarden.
	 */
	std::map<Antwoord::Keuzes, std::string> createMap() {
			static std::map<Antwoord::Keuzes, std::string> m;
			m.insert(std::make_pair(Antwoord::Keuzes::A, "A"));
			m.insert(std::make_pair(Antwoord::Keuzes::B,"B"));
			m.insert(std::make_pair(Antwoord::Keuzes::C, "C"));
			m.insert(std::make_pair(Antwoord::Keuzes::D, "D"));
			return m;
		}
	const std::map<Antwoord::Keuzes, std::string> enumConversion = createMap();


};

#endif /* ANTWOORD_HPP_ */
