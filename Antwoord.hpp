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
	const Antwoord& operator=(const Antwoord& a);
	bool isCorrect() const;
	std::string getAntwoord();
private:
	Keuzes id;
	std::string antwoord;
	bool correct;
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
