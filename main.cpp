/**
 * main.cpp
 *
 *  Created on: 21 okt. 2016
 *      Author: Kevin Taartmans
 */

#include <vector>
#include <iostream>

#include "Onderwerp.hpp"
#include "Course.hpp"
#include "Semester.hpp"
#include "Antwoord.hpp"
#include "Gebruiker.hpp"
#include "Toets.hpp"

int main()
{
	std::vector<Gebruiker> gebruikers;

	//Gebruiker maken
	Gebruiker g1("henk", "wachtwoord");

	//Onderwerpen maken
	Onderwerp o1("Arrays", 0);
	Onderwerp o2("Basisindeling code", 1);
	Onderwerp o3("Elektrische circuits", 0);
	Onderwerp o4("Hexadecimaal en binair rekenen", 1);
	Onderwerp o5("HTML", 0);
	Onderwerp o6("PHP", 1);
	Onderwerp o7("Domeinmodellen", 0);
	Onderwerp o8("Algemene modelleerkennis", 1);

	//Courses maken
	Course c1("SPD", 0);
	Course c2("ESD", 1);
	Course c3("WebDevs", 0);
	Course c4("OSM-M", 0);

	//Semesters maken
	Semester s1("Propedeuse, eerste helft", 0);
	Semester s2("Propedeuse, tweede helft", 1);
	Semester s3("OSM", 2);

	//ADD MEERKEUZE VRAGEN AAN ONDERWEP o1
	o1.addMeerkeuzeVraag(
			MeerkeuzeVraag("Hoeveel meter is een km?", 3, //
					std::vector<Antwoord>
					{ Antwoord(Antwoord::Keuzes::A, "1000", true), Antwoord(
							Antwoord::Keuzes::B, "300"), Antwoord(
							Antwoord::Keuzes::C, "3000"), Antwoord(
							Antwoord::Keuzes::D, "255") }));

	o1.addMeerkeuzeVraag(
			MeerkeuzeVraag("Hoeveel centimeter is een km?", 4,
					std::vector<Antwoord>
					{ Antwoord(Antwoord::Keuzes::A, "5000"), Antwoord(
							Antwoord::Keuzes::B, "200"), Antwoord(
							Antwoord::Keuzes::C, "100000", true), Antwoord(
							Antwoord::Keuzes::D, "10000") }));

	o1.addMeerkeuzeVraag(
			MeerkeuzeVraag("Hoeveel centimer is een m?", 4,
					std::vector<Antwoord>
					{ Antwoord(Antwoord::Keuzes::A, "100", true), Antwoord(
							Antwoord::Keuzes::B, "567"), Antwoord(
							Antwoord::Keuzes::C, "666"), Antwoord(
							Antwoord::Keuzes::D, "256") }));

	o1.addMeerkeuzeVraag(
			MeerkeuzeVraag("Hoeveel millimeter is een m?", 4,
					std::vector<Antwoord>
					{ Antwoord(Antwoord::Keuzes::A, "1001"), Antwoord(
							Antwoord::Keuzes::B, "1000", true), Antwoord(
							Antwoord::Keuzes::C, "999"), Antwoord(
							Antwoord::Keuzes::D, "998") }));

	o1.addMeerkeuzeVraag(
			MeerkeuzeVraag("Hoeveel inch is een km?", 9,
					std::vector<Antwoord>
					{ Antwoord(Antwoord::Keuzes::A, "Dat reken ik niet uit",
							true), Antwoord(Antwoord::Keuzes::B, "300"),
							Antwoord(Antwoord::Keuzes::C, "39370"),
							Antwoord(Antwoord::Keuzes::D, "38260")}));

	//ADD OPEN VRAGEN AAN ONDERWEP o1
	o1.addOpenVraag(
			OpenVraag("Leg het verschil van een appel en een peer uit?", 3,
					std::vector<std::string>
					{ "rond", "smaak", "geur" }));

	o1.addOpenVraag(
			OpenVraag("Geef je mening over PHP?", 6, std::vector<std::string>
			{ "leuk", "praktisch", "makkelijk" }));

	o1.addOpenVraag(
			OpenVraag("Hoeveel open vragen zitten er in deze toets?", 2,
					std::vector<std::string>
					{ "5" }));

	o1.addOpenVraag(
			OpenVraag("Hoeveel meerkeuze vragen zitten er in deze toets?", 2,
					std::vector<std::string>
					{ "5" }));

	o1.addOpenVraag(
			OpenVraag("Wanneer komt sinterklaas naar Nederland?", 5,
					std::vector<std::string>
					{ "November" }));

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

	//Semesters toevoegen aan gebruiker
	g1.addSemester(s1);
	g1.addSemester(s2);
	g1.addSemester(s3);

	//Gebruikers toevoegen aan vector
	gebruikers.push_back(g1);


	std::cout << "Welkom bij de zelftoetsapplicatie." << std::endl;
	bool userSuccessfullyLoggedIn = false;
	while(!userSuccessfullyLoggedIn) {
		std::string givenUsername;
		std::string givenPassword;
		std::cout << "Gebruikersnaam: ";
		std::getline(std::cin, givenUsername);
		std::cout << "Wachtwoord: ";
		std::getline(std::cin, givenPassword);

		for (Gebruiker& gebruiker : gebruikers)
		{
			if (givenUsername == gebruiker.getUsername() && givenPassword == gebruiker.getWachtwoord())
			{
				userSuccessfullyLoggedIn = true;
				gebruiker.gebruikApp();
			}
			else
			{
				std::cout << "De opgegeven gegevens zijn incorrect" << std::endl;
			}
		}
	}
	return 0;
}

