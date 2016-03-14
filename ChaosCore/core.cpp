/*
 * core.cpp
 *
 *  Created on: 07.03.2016
 *      Author: chaos
 */

#include "core.h"

namespace chaos
{
	void log (LogLevel level, const char* message, va_list argptr)
	{
#ifdef DEBUG
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

		char* fMessage = new char();
		vsprintf(fMessage, message, argptr);
		va_end(argptr);
		fprintf(stream, "[%s]\t%s\n", label, fMessage);
#endif
	}

	void info (const char* message, ...)
	{
		va_list argptr;
		va_start(argptr, message);
		log(LogLevel::INFO, message, argptr);
	}

	void notice (const char* message, ...)
	{
		va_list argptr;
		va_start(argptr, message);
		log(LogLevel::NOTICE, message, argptr);
	}

	void warn (const char* message, ...)
	{
		va_list argptr;
		va_start(argptr, message);
		log(LogLevel::WARN, message, argptr);
	}

	void error (const char* message, ...)
	{
		va_list argptr;
		va_start(argptr, message);
		log(LogLevel::ERROR, message, argptr);
	}
}
