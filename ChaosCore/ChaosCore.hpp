/*
 *  ChaosCore.hpppp
 *  core
 *
 *  Created by Fu Lam Diep on 08.03.16.
 *  Copyright © 2016 Fu Lam Diep. All rights reserved.
 *
 */

#ifndef ChaosCore_core_hpp
#define ChaosCore_core_hpp

namespace chaos
{
	/** 
	 * Initializes the lib
	 */
	bool init ();
	
	/*
	 +---------------------------------------------------------
	 | DEBUG FUNCTIONS
	 +---------------------------------------------------------
	 */
	
	/**
	 * Outputs info messages to the console
	 * @param format
	 */
	void info (const char* __restrict message, ...);
	
	/**
	 * Outputs notice messages to the console
	 * @param format
	 */
	void notice (const char* __restrict message, ...);
	
	/**
	 * Outputs warn messages to the console
	 * @param format
	 */
	void warn (const char* __restrict message, ...);
	
	/**
	 * Outputs error messages to the console
	 * @param format
	 */
	void error (const char* __restrict message, ...);
}

#endif
