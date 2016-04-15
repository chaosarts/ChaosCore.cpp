/*
 * Exception.cpp
 *
 *  Created on: 06.03.2016
 *      Author: chaos
 */

#include "Exception.hpp"

namespace chaos
{

	Exception::Exception(const char* message, int code, Exception* parent) : message(message), code(code), parent(parent)
	{

	}


	Exception::Exception(const char* message, int code) : message(message), code(code), parent(nullptr)
	{

	}

	Exception::Exception(const char* message) : message(message), code(0), parent(nullptr)
	{

	}

	Exception::~Exception()
	{

	}

} /* namespace ca */
