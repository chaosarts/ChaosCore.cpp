//
//  base.hpp
//  ChaosCore
//
//  Created by Fu Lam Diep on 29.07.16.
//  Copyright © 2016 Fu Lam Diep. All rights reserved.
//

#ifndef ChaosCore_debug_hpp
#define ChaosCore_debug_hpp

#define CC_LOG_NONE 0x0
#define CC_LOG_ERROR 0x1
#define CC_LOG_WARN 0x2
#define CC_LOG_NOTICE 0x4
#define CC_LOG_INFO 0x8
#define CC_LOG_ALL (CC_LOG_ERROR | CC_LOG_WARN | CC_LOG_NOTICE | CC_LOG_INFO)

#ifndef CC_DEBUG_LEVEL
#define CC_DEBUG_LEVEL CC_LOG_ALL
#endif

#ifndef __exprToStr
#define __exprToStr(x) #x
#endif


namespace chaos
{
	/**
	 * Outputs info messages to the console
	 * @param format
	 */
	void info (const char* __restrict message, ...)
	__attribute__((format(printf, 1, 2)));
	
	/**
	 * Outputs notice messages to the console
	 * @param format
	 */
	void notice (const char* __restrict message, ...)
	__attribute__((format(printf, 1, 2)));
	
	/**
	 * Outputs warn messages to the console
	 * @param format
	 */
	void warn (const char* __restrict message, ...)
	__attribute__((format(printf, 1, 2)));
	
	/**
	 * Outputs error messages to the console
	 * @param format
	 */
	void error (const char* __restrict message, ...)
	__attribute__((format(printf, 1, 2)));
}

#endif /* base_hpp */
