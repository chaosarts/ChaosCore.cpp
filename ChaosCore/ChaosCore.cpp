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
	
	void log (LogLevel level, const char* message, va_list argptr)
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
		
//		int count = 0;
//		const char* message_ptr = message;
//		while (*message_ptr != 0) count++;
//		
//		char fMessage[count];
//		vsprintf(fMessage, message, argptr);
//		va_end(argptr);
//		fprintf(stream, "[%s]\t%s\n", label, fMessage);
#endif
	}

	void info (const char* __restrict message, ...)
	{
		va_list argptr;
		va_start(argptr, message);
		log(LogLevel::INFO, message, argptr);
	}

	void notice (const char* __restrict message, ...)
	{
		va_list argptr;
		va_start(argptr, message);
		log(LogLevel::NOTICE, message, argptr);
	}

	void warn (const char* __restrict message, ...)
	{
		va_list argptr;
		va_start(argptr, message);
		log(LogLevel::WARN, message, argptr);
	}

	void error (const char* __restrict message, ...)
	{
		va_list argptr;
		va_start(argptr, message);
		log(LogLevel::ERROR, message, argptr);
	}
}
