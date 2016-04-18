/*
 * core.cpp
 *
 *  Created on: 07.03.2016
 *      Author: chaos
 */

#include <cstdarg>
#include <cstdlib>
#include <cstdio>
#include "ChaosCore.hpp"

#ifndef CHAOS_DEBUG_LEVEL
#define CHAOS_DEBUG_LEVEL 4
#endif

namespace chaos
{
	bool _initialized = false;
	bool init ()
	{
		_initialized = true;
		return _initialized;
	}
	
	/*
	 +---------------------------------------------------------
	 | DEBUG FUNCTIONS
	 +---------------------------------------------------------
	 */
	
	typedef enum {
		INFO = 4,
		NOTICE = 3,
		WARN = 2,
		ERROR = 1
	} LogLevel;
	
	void log (LogLevel level, const char* format, va_list argptr)
	{
#ifdef DEBUG
		if (level > CHAOS_DEBUG_LEVEL) return;
		const char* label = "";
		
		FILE* stream = stdout;
		
		switch (level)
		{
			case LogLevel::INFO:
				label = "Info";
				break;
			case LogLevel::NOTICE:
				label = "Notice";
				break;
			case LogLevel::WARN:
				label = "Warning";
				stream = stderr;
				break;
			case LogLevel::ERROR:
				label = "Error";
				stream = stderr;
				break;
		}
		
		fprintf(stream, "[%s] ", label);
		vfprintf(stream, format, argptr);
		fprintf(stream, "\n");
#endif
	}

	void info (const char* __restrict format, ...)
	{
#ifdef DEBUG
		va_list argptr;
		va_start(argptr, format);
		log(LogLevel::INFO, format, argptr);
		va_end(argptr);
#endif
	}

	void notice (const char* __restrict format, ...)
	{
#ifdef DEBUG
		va_list argptr;
		va_start(argptr, format);
		log(LogLevel::NOTICE, format, argptr);
		va_end(argptr);
#endif
	}

	void warn (const char* __restrict format, ...)
	{
#ifdef DEBUG
		va_list argptr;
		va_start(argptr, format);
		log(LogLevel::WARN, format, argptr);
		va_end(argptr);
#endif
	}

	void error (const char* __restrict format, ...)
	{
#ifdef DEBUG
		va_list argptr;
		va_start(argptr, format);
		log(LogLevel::ERROR, format, argptr);
		va_end(argptr);
#endif
	}
}
