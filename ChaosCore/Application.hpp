/*
 * Application.h
 *
 *  Created on: 06.03.2016
 *      Author: chaos
 */

#ifndef ChaosCore_Application_hpp
#define ChaosCore_Application_hpp

#include "AppDelegate.hpp"

namespace chaos
{
	class Application
	{
	private:

		/** The singleton instance of this class */
		static Application* _instance;


		/** Provides the application delegate */
		AppDelegate* _delegate = nullptr;


		/** Creates a new*/
		Application();

		/** Destroys the application */
		virtual ~Application();

	public:

		/** 
		 * Returns the singleton instance of this class 
		 * @return The singleton instance of this class
		 */
		static Application* getInstance ();

		
		/** 
		 * Initializes the application 
		 */
		void init (AppDelegate* delegate);

		
		/** 
		 * Runs the application 
		 */
		void run ();
	};

} /* namespace ca */

#endif /* APPLICATION_H_ */
