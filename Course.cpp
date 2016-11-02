/**
 * Course.cpp
 *
 *  Created on: 21 okt. 2016
 *      Author: Kevin Taartmans
 */

#include "Course.hpp"

Course::Course(const std::string aNaam, const unsigned short aCourseID)
:naam(aNaam), courseID(aCourseID)
{
	// TODO Auto-generated constructor stub

}

Course::~Course()
{
	// TODO Auto-generated destructor stub
}

Onderwerp Course::kiesOnderwerp()
{
	return courseOnderwerpen.front();
}

Course::Course(const Course& c)
:naam(c.naam), courseID(c.courseID), courseOnderwerpen(c.courseOnderwerpen)
{
}

void Course::addOnderwerp(const Onderwerp& o)
{
	courseOnderwerpen.push_back(o);
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
