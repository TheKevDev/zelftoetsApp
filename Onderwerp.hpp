/**
 * Onderwerp.hpp
 *
 *  Created on: 21 okt. 2016
 *      Author: Kevin Taartmans
 */

#ifndef ONDERWERP_HPP_
#define ONDERWERP_HPP_

class Onderwerp
{
public:
	Onderwerp(const std::string& aNaam,	unsigned short aOnderwerpID);
	virtual ~Onderwerp();
private:
	std::string naam;
	unsigned short onderwerpID;
};

#endif /* ONDERWERP_HPP_ */
