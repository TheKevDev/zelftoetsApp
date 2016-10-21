/**
 * OpenVraag.hpp
 *
 *  Created on: 21 okt. 2016
 *      Author: Kevin Taartmans
 */

#ifndef OPENVRAAG_HPP_
#define OPENVRAAG_HPP_

#include <vector>
#include <string>

class OpenVraag:public Vraag
{
public:
	OpenVraag();
	virtual ~OpenVraag();
private:
	std::string vraag;
	std::vector<std::string> antwoorden;
};

#endif /* OPENVRAAG_HPP_ */
