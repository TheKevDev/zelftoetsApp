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

//class Course;

class Semester
{
public:
	Semester(const std::string& aNaam, const unsigned short aSemesterID);
	Semester(const Semester& s);
	virtual ~Semester();

	/**
	 * Function that adds a course to the semester
	 * @param c reference to a course
	 */
	void addCourse(const Course& c);
	/**
	 * Functie die een course selecteerd uit de course vector
	 * @return de geselecteerde course
	 */
	const Course& selectCourse();

	//GETTERS AND SETTERS
	const std::string& getNaam() const;
	long getSemesterId() const;
	const std::vector<Course>& getSemesterCourses() const;

	//OPERATORS
	const Semester& operator=(const Semester& s);
private:
	std::string naam;
	long semesterID;
	std::vector<Course> semesterCourses;
};

#endif /* SEMESTER_HPP_ */
