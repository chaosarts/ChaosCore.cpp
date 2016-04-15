//
//  AppDelegate.hpp
//  ChaosCore
//
//  Created by Fu Lam Diep on 22.03.16.
//  Copyright © 2016 Fu Lam Diep. All rights reserved.
//

#ifndef ChaosCore_AppDelegate_hpp
#define ChaosCore_AppDelegate_hpp

namespace chaos
{
	class AppDelegate
	{
	public:
		
		/**
		 * Will be called if the delegate is about to be deleted
		 */
		virtual ~AppDelegate ();
		
		
		/**
		 * Will be called, when the application has launched 
		 */
		virtual void applicationDidLaunch () = 0;
		
		/** 
		 * Will be called, when the application will terminate 
		 */
		virtual void applicationWillTerminate () = 0;
	};
}

#endif /* AppDelegate_hpp */
