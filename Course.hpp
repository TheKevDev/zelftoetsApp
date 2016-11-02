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
	Onderwerp kiesOnderwerp();
	void addOnderwerp(const Onderwerp& o);
	const Course& operator=(const Course& c);
	const std::vector<Onderwerp>& getCourseOnderwerpen() const;
	const std::string& getNaam() const;
	unsigned short getCourseId() const;

private:
	std::string naam;
	unsigned short courseID;
	std::vector<Onderwerp> courseOnderwerpen;
};

#endif /* COURSE_HPP_ */
