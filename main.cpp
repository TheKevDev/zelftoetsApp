/**
 * main.cpp
 *
 *  Created on: 21 okt. 2016
 *      Author: Kevin Taartmans
 */

#include <vector>

#include "Onderwerp.hpp"
#include "Course.hpp"
#include "Semester.hpp"

int main() {
	//Onderwerpen maken
	Onderwerp o1("Arrays", 0);
	Onderwerp o2("Basisindeling code", 1);
	Onderwerp o3("Elektrische circuits", 2);
	Onderwerp o4("Hexadecimaal en binair rekenen", 3);
	Onderwerp o5("HTML", 4);
	Onderwerp o6("PHP", 5);
	Onderwerp o7("Domeinmodellen", 6);
	Onderwerp o8("Algemene modelleerkennis", 7);

	//Courses maken
	Course c1("SPD", 0);
	Course c2("ESD", 1);
	Course c3("WebDevs", 2);
	Course c4("OSM-M", 3);

	//Semesters maken
	Semester s1("Propedeuse, eerste helft", 0);
	Semester s2("Propedeuse, tweede helft", 1);
	Semester s3("OSM", 2);

	//Onderwerpen toevoegen aan courses
	c1.addOnderwerp(o1);
	c1.addOnderwerp(o2);
	c2.addOnderwerp(o3);
	c2.addOnderwerp(o4);
	c3.addOnderwerp(o5);
	c3.addOnderwerp(o6);
	c4.addOnderwerp(o7);
	c4.addOnderwerp(o8);

	//Courses toevoegen aan semesters
	s1.addCourse(c1);
	s1.addCourse(c2);
	s2.addCourse(c3);
	s3.addCourse(c4);

	return 0;
}

