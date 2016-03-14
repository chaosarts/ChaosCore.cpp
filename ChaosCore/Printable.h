/*
 * Printable.h
 *
 *  Created on: 07.03.2016
 *      Author: chaos
 */

#ifndef ChaosCore_Printable_hpp_
#define ChaosCore_Printable_hpp_

namespace chaos
{

	class Printable
	{
	public:
		virtual ~Printable() {};
		virtual const char* toString () = 0;
	};

} /* namespace ca */

#endif /* PRINTABLE_H_ */
