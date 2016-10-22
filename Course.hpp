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

class Onderwerp;

class Course
{
public:
	Course(const std::string aNaam, const unsigned short aCourseID);
	virtual ~Course();
	Onderwerp kiesOnderwerp();
	void addOnderwerp(Onderwerp o);
private:
	std::string naam;
	unsigned short courseID;
	std::vector<Onderwerp> courseOnderwerpen;
};

#endif /* COURSE_HPP_ */
