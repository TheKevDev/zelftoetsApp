/**
 * Course.hpp
 *
 *  Created on: 21 okt. 2016
 *      Author: Kevin Taartmans
 */

#ifndef COURSE_HPP_
#define COURSE_HPP_

#include <string>

#include "Onderwerp.hpp"

class Onderwerp;

class Course
{
public:
	Course();
	virtual ~Course();
	Onderwerp kiesOnderwerp();
	void addOnderwerp();
private:
	std::string naam;
	short courseID;
};

#endif /* COURSE_HPP_ */
