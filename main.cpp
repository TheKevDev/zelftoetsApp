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
#include "Antwoord.hpp"
#include "Toets.hpp"

#include <iostream>

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
	c1.addOnderwerp(Onderwerp("Arrays", 0));
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


	//ADD MEERKEUZE VRAGEN AAN ONDERWEP o1
	o1.addMeerkeuzeVraag(MeerkeuzeVraag("Hoeveel meter is een km?",3,std::vector<Antwoord>{
		Antwoord(Antwoord::Keuzes::A,"1000",true),
		Antwoord(Antwoord::Keuzes::B,"300"),
		Antwoord(Antwoord::Keuzes::C,"3000")
	}));

	o1.addMeerkeuzeVraag(MeerkeuzeVraag("Hoeveel centimeter is een km?",3,std::vector<Antwoord>{
		Antwoord(Antwoord::Keuzes::A,"5000"),
		Antwoord(Antwoord::Keuzes::B,"200"),
		Antwoord(Antwoord::Keuzes::C,"100000",true)
	}));

	o1.addMeerkeuzeVraag(MeerkeuzeVraag("Hoeveel centimer is een m?",3,std::vector<Antwoord>{
		Antwoord(Antwoord::Keuzes::A,"100",true),
		Antwoord(Antwoord::Keuzes::B,"567"),
		Antwoord(Antwoord::Keuzes::C,"666")
	}));

	o1.addMeerkeuzeVraag(MeerkeuzeVraag("Hoeveel millimeter is een m?",3,std::vector<Antwoord>{
		Antwoord(Antwoord::Keuzes::A,"1001"),
		Antwoord(Antwoord::Keuzes::B,"1000",true),
		Antwoord(Antwoord::Keuzes::C,"999")
	}));

	o1.addMeerkeuzeVraag(MeerkeuzeVraag("Hoeveel inch is een km?",3,std::vector<Antwoord>{
		Antwoord(Antwoord::Keuzes::A,"Dat reken ik niet uit",true),
		Antwoord(Antwoord::Keuzes::B,"300"),
		Antwoord(Antwoord::Keuzes::C,"39370")
	}));

	//ADD OPEN VRAGEN AAN ONDERWEP o1
	o1.addOpenVraag(OpenVraag("Leg het verschil van een appel en een peer uit?",3,std::vector<std::string>{
			"rond", "smaak", "geur"
		}));

	o1.addOpenVraag(OpenVraag("Geef je mening over PHP?",3,std::vector<std::string>{
			"leuk","praktisch","makkelijk"
		}));

	o1.addOpenVraag(OpenVraag("Hoeveel open vragen zitten er in deze toets?",3,std::vector<std::string>{
			"5"
		}));

	o1.addOpenVraag(OpenVraag("Hoeveel meerkeuze vragen zitten er in deze toets?",3,std::vector<std::string>{
			"5"
		}));

	o1.addOpenVraag(OpenVraag("Wanneer komt sinterklaas naar Nederland?",3,std::vector<std::string>{
			"November"
		}));


	o1.maakToets();

	std::cout<<o1.getToets()->getVraag().getVraag()<<std::endl;

	return 0;
}

