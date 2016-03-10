/*
 * Exception.h
 *
 *  Created on: 06.03.2016
 *      Author: chaos
 */

#ifndef _ChaosCore_Exception_h_
#define _ChaosCore_Exception_h_

namespace ca
{
	namespace core
	{

		class Exception
		{
		public:
			const char* message;
			const int code;
			const Exception* parent;
			Exception(const char* message, int code, Exception* parent);
			Exception(const char* message, int code);
			Exception(const char* message);
			virtual ~Exception();
		};

	} /* namespace core */
} /* namespace ca */

#endif /* EXCEPTION_H_ */
