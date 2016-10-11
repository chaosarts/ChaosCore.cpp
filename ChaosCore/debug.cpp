//
//  base.cpp
//  ChaosCore
//
//  Created by Fu Lam Diep on 29.07.16.
//  Copyright © 2016 Fu Lam Diep. All rights reserved.
//

#include "debug.hpp"
#include <cstdarg>
#include <cstdlib>
#include <cstdio>


namespace chaos
{	
	
	/// Local variables
	/// +++++++++++++++
	
	bool _initialized = false;
	
	
	/// Local functions
	/// +++++++++++++++
	
	
	void log (unsigned int level, const char* format, va_list argptr)
	{
#ifdef DEBUG
		if ((level & CC_DEBUG_LEVEL) == 0) return;
		const char* label = "";
		
		FILE* stream = stdout;
		
		switch (level)
		{
			case CC_LOG_INFO: label = "     Info "; break;
			case CC_LOG_NOTICE: label = "   Notice "; break;
			case CC_LOG_WARN: label = "  Warning "; stream = stderr; break;
			case CC_LOG_ERROR: label = "    Error "; stream = stderr; break;
		}
		
		fprintf(stream, "[%s] ", label);
		vfprintf(stream, format, argptr);
		fprintf(stream, "\n");
#endif
	}
	
	
	/// Public functions
	/// ++++++++++++++++
	
	bool init ()
	{
		_initialized = true;
		return _initialized;
	}
	
	void info (const char* __restrict format, ...)
	{
#ifdef DEBUG
		va_list argptr;
		va_start(argptr, format);
		log(CC_LOG_INFO, format, argptr);
		va_end(argptr);
#endif
	}
	
	void notice (const char* __restrict format, ...)
	{
#ifdef DEBUG
		va_list argptr;
		va_start(argptr, format);
		log(CC_LOG_NOTICE, format, argptr);
		va_end(argptr);
#endif
	}
	
	void warn (const char* __restrict format, ...)
	{
#ifdef DEBUG
		va_list argptr;
		va_start(argptr, format);
		log(CC_LOG_WARN, format, argptr);
		va_end(argptr);
#endif
	}
	
	void error (const char* __restrict format, ...)
	{
#ifdef DEBUG
		va_list argptr;
		va_start(argptr, format);
		log(CC_LOG_ERROR, format, argptr);
		va_end(argptr);
#endif
	}
}
