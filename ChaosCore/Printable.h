/*
 * Printable.h
 *
 *  Created on: 07.03.2016
 *      Author: chaos
 */

#ifndef _ChaosCore_Printable_h_
#define _ChaosCore_Printable_h_

namespace ca
{
	namespace core
	{

		class Printable
		{
		public:
			virtual ~Printable() {};
			virtual const char* toString () = 0;
		};

	} /* namespace core */
} /* namespace ca */

#endif /* PRINTABLE_H_ */
