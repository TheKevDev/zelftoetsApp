/**
 * Course.hpp
 *
 *  Created on: 21 okt. 2016
 *      Author: Kevin Taartmans
 */

#ifndef COURSE_HPP_
#define COURSE_HPP_

#include <string>
#include <vector>

#include "Onderwerp.hpp"

class Course
{
public:
	Course(const std::string aNaam, const unsigned short aCourseID);
	Course(const Course& c);
	virtual ~Course();
	/**
	 * Functie voegt een onderwerp toe aan de course
	 * @param o
	 */
	void addOnderwerp(const Onderwerp& o);

	//GETTERS AND SETTERS
	const std::vector<Onderwerp>& getCourseOnderwerpen() const;
	const std::string& getNaam() const;
	unsigned short getCourseId() const;

	//OPERATORS
	const Course& operator=(const Course& c);
private:
	std::string naam;
	unsigned short courseID;
	std::vector<Onderwerp> courseOnderwerpen;
};

#endif /* COURSE_HPP_ */
