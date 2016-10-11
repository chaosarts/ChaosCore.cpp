//
//  file_func.hpp
//  ChaosCore
//
//  Created by Fu Lam Diep on 02.08.16.
//  Copyright © 2016 Fu Lam Diep. All rights reserved.
//

#ifndef ChaosCore_file_func_hpp
#define ChaosCore_file_func_hpp

#include <cstddef>

namespace chaos
{
	/**
	 * Determines if the given filename is a file
	 * @param filename The path to the file to check
	 * @return True if the file is a regular file, otherwise false
	 */
	bool is_file (const char* filename);
	
	
	/**
	 * Determines if the given filename is a directory
	 * @param filename The path to the file to check
	 * @return True if the file is a directory, otherwise false
	 */
	bool is_dir (const char* filename);
	
	
	/**
	 * Determines if the given filename is a symbolic link
	 * @param filename The path to the file to check
	 * @return True if the file is a sym link, otherwise false
	 */
	bool is_link (const char* filename);
	
	
	/**
	 * Determines if the given filename exists or not
	 * @param filename The path to the file to check
	 * @return True if the file exists, otherwise false
	 */
	bool fexists (const char* filename);
	
	
	/**
	 * Reads the contents of a file as binary data
	 * @param filename The path to the file to read
	 * @return The content of the file
	 */
	char* fread (const char* filename);
	
	/**
	 * Returns the size of the file
	 * @param filename The nam of the file to measure the size of
	 * @return The size of the file in bytes
	 */
	size_t fsize (const char* filename);
}

#endif /* file_func_hpp */
