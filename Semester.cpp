/**
 * Semester.cpp
 *
 *  Created on: 21 okt. 2016
 *      Author: Kevin Taartmans
 */

#include "Semester.hpp"
#include "UserInput.hpp"

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

const Course& Semester::selectCourse() {
	std::cout << std::endl << "Kies een semester uit de lijst:" << std::endl;
		unsigned short tmpCounter = 0;
		for (Course& course : semesterCourses)
		{
			std::cout << tmpCounter << ": " << course.getNaam() << std::endl;
			++tmpCounter;
		}
		std::string userInput = UserInput::getUserInput().getInputFromUser("CourseNummer: ");

	return semesterCourses.at(stoi(userInput));
}

const std::string& Semester::getNaam() const
{
	return naam;
}

long Semester::getSemesterId() const
{
	return semesterID;
}

Semester::Semester(const Semester& s)
:naam(s.naam), semesterID(s.semesterID), semesterCourses(s.semesterCourses)
{
}

const Semester& Semester::operator =(const Semester& s)
{
	if(this!=&s) {
		this->naam = s.naam;
		this->semesterID = s.semesterID;
		this->semesterCourses = s.semesterCourses;
	}
	return *this;
}

const std::vector<Course>& Semester::getSemesterCourses() const
{
	return semesterCourses;
}
