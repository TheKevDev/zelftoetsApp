/**
 * Antwoord.hpp
 *
 *  Created on: 21 okt. 2016
 *      Author: Kevin Taartmans
 */

#ifndef ANTWOORD_HPP_
#define ANTWOORD_HPP_

#include <string>

class Antwoord
{
public:
	enum Keuzes {A,B,C,D};
	Antwoord(Keuzes anID,const std::string& aAntwoord,bool aCorrect=false);
	Antwoord(const Antwoord& a);
	virtual ~Antwoord();
	bool isAntwoordCorrect();
	const Antwoord& operator=(const Antwoord& a);
	bool isCorrect() const;

private:
	Keuzes id;
	std::string antwoord;
	bool correct;
};

#endif /* ANTWOORD_HPP_ */
