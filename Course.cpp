/**
 * Course.cpp
 *
 *  Created on: 21 okt. 2016
 *      Author: Kevin Taartmans
 */

#include "Course.hpp"
#include "UserInput.hpp"

Course::Course(const std::string aNaam, const unsigned short aCourseID)
:naam(aNaam), courseID(aCourseID)
{
	// TODO Auto-generated constructor stub

}

Course::~Course()
{
	// TODO Auto-generated destructor stub
}

Course::Course(const Course& c)
:naam(c.naam), courseID(c.courseID), courseOnderwerpen(c.courseOnderwerpen)
{
}

void Course::addOnderwerp(const Onderwerp& o)
{
	courseOnderwerpen.push_back(o);
}

const Onderwerp& Course::selectOnderwerp() {
	std::cout << std::endl << "Kies een onderwep uit de lijst:" << std::endl;
		unsigned short tmpCounter = 0;
		for (Onderwerp& onderwerp : courseOnderwerpen)
		{
			std::cout << tmpCounter << ": " << onderwerp.getNaam() << std::endl;
			++tmpCounter;
		}
		std::string userInput = UserInput::getUserInput().getInputFromUser("OnderwerpNummer: ");

	return courseOnderwerpen.at(stoi(userInput));
}

const Course& Course::operator =(const Course& c)
{
	if(this!=&c) {
		this->naam = c.naam;
		this->courseID = c.courseID;
		this->courseOnderwerpen = c.courseOnderwerpen;
	}
	return *this;
}

const std::vector<Onderwerp>& Course::getCourseOnderwerpen() const
{
	return courseOnderwerpen;
}

const std::string& Course::getNaam() const
{
	return naam;
}

unsigned short Course::getCourseId() const
{
	return courseID;
}
