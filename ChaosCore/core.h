/*
 *  core.hpp
 *  core
 *
 *  Created by Fu Lam Diep on 08.03.16.
 *  Copyright © 2016 Fu Lam Diep. All rights reserved.
 *
 */

#ifndef ChaosCore_core_hpp_
#define ChaosCore_core_hpp_

/* The classes below are exported */
#pragma GCC visibility push(default)

#include <cstdarg>
#include <cstdlib>
#include <cstdio>
#include "Application.h"
#include "Printable.h"
#include "Exception.h"

namespace ca
{
	namespace core
	{
		typedef enum {
			INFO, NOTICE, WARN, ERROR
		} LogLevel;
		
		void info (const char* message, ...);
		void notice (const char* message, ...);
		void warn (const char* message, ...);
		void error (const char* message, ...);
	}
}


#pragma GCC visibility pop
#endif
