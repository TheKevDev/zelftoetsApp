/**
 * IVraag.hpp
 *
 *  Created on: 21 okt. 2016
 *      Author: Kevin Taartmans
 */

#ifndef IVRAAG_HPP_
#define IVRAAG_HPP_

class IVraag
{
public:
	virtual ~IVraag() {};
	virtual const Vraag& getVraag()=0;
	virtual bool beantwoordVraag()=0;
};

#endif /* IVRAAG_HPP_ */
