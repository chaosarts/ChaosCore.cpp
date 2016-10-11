//
//  file_func.cpp
//  ChaosCore
//
//  Created by Fu Lam Diep on 02.08.16.
//  Copyright © 2016 Fu Lam Diep. All rights reserved.
//

#include "file_func.hpp"

#include <sys/types.h>
#include <sys/stat.h>
#include <iostream>
#include <fstream>

namespace chaos
{
	bool is_file (const char* filename)
	{
		struct stat info;
		stat(filename, &info);
		
		return S_ISREG(info.st_mode);
	}
	
	
	bool is_dir (const char* filename)
	{
		struct stat info;
		stat(filename, &info);
		
		return S_ISDIR(info.st_mode);
	}
	
	
	bool is_link (const char* filename)
	{
		struct stat info;
		stat(filename, &info);
		
		return S_ISLNK(info.st_mode);
	}
	
	
	bool fexists (const char* filename)
	{
		return is_file(filename) || is_dir(filename) || is_link(filename);
	}
	
	
	
	char* fread (const char* filename)
	{
		std::ifstream file(filename, std::ios::in | std::ios::binary | std::ios::ate);
		if (file.is_open())
		{
			std::streampos size = file.tellg();
			char* content = new char[size];
			file.seekg(0, std::ios::beg);
			file.read(content, size);
			file.close();
			
			return content;
		}
		
		return nullptr;
	}
	
	
	size_t fsize (const char* filename)
	{
		size_t size = 0;
		std::ifstream file(filename, std::ios::in | std::ios::binary | std::ios::ate);
		if (file.is_open())
		{
			std::streampos endpos = file.tellg();
			file.seekg(0, std::ios::beg);
			std::streampos startpos = file.tellg();
			
			size = (size_t)(endpos - startpos);
		}
		
		return size;
	}
}