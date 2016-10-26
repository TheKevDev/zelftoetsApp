/**
 * Semester.cpp
 *
 *  Created on: 21 okt. 2016
 *      Author: Kevin Taartmans
 */

#include "Semester.hpp"

Semester::Semester(const std::string& aNaam, const unsigned short aSemesterID)
:naam(aNaam),semesterID(aSemesterID)
{
	// TODO Auto-generated constructor stub

}

Semester::~Semester()
{
	// TODO Auto-generated destructor stub
}

void Semester::addCourse(const Course& c)
{
	semesterCourses.push_back(c);
}

Course Semester::kiesCourse()
{
}

const std::string& Semester::getNaam() const
{
	return naam;
}

long Semester::getSemesterId() const
{
	return semesterID;
}
