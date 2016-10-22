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

void Course::addOnderwerp(const Onderwerp& o)
{
	courseOnderwerpen.push_back(o);
}
