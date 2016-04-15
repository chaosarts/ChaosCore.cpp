/*
 * Exception.h
 *
 *  Created on: 06.03.2016
 *      Author: chaos
 */

#ifndef ChaosCore_Exception_hpp
#define ChaosCore_Exception_hpp

namespace chaos
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

} /* namespace ca */

#endif /* EXCEPTION_H_ */
