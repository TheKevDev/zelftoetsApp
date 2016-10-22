/**
 * Semester.hpp
 *
 *  Created on: 21 okt. 2016
 *      Author: Kevin Taartmans
 */

#ifndef SEMESTER_HPP_
#define SEMESTER_HPP_

#include <string>
#include <vector>

#include "Course.hpp"

class Course;

class Semester
{
public:
	Semester(const std::string& aNaam, const unsigned short aSemesterID);
	virtual ~Semester();
	void addCourse(Course c);
	Course kiesCourse();
private:
	std::string naam;
	long semesterID;
	std::vector<Course> semesterCourses;
};

#endif /* SEMESTER_HPP_ */
