/**
 * Semester.hpp
 *
 *  Created on: 21 okt. 2016
 *      Author: Kevin Taartmans
 */

#ifndef SEMESTER_HPP_
#define SEMESTER_HPP_

class Semester
{
public:
	Semester(const std::string& aNaam,unsigned short aSemesterID);
	virtual ~Semester();
private:
	std::string naam;
	unsigned short semesterID;
};

#endif /* SEMESTER_HPP_ */
