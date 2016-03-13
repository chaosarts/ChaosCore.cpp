/*
 * Application.h
 *
 *  Created on: 06.03.2016
 *      Author: chaos
 */

#ifndef ChaosCore_Application_hpp_
#define ChaosCore_Application_hpp_

#include <cstdlib>
#include <cstdio>

namespace ca
{
	namespace core
	{

		class Application
		{
		public:
			class Delegate;

		private:

			/** The singleton instance of this class */
			static Application* _instance;


			/** Provides the application delegate */
			Delegate* _delegate = nullptr;


			/** Creates a new*/
			Application();

			/** Destroys the application */
			virtual ~Application();

		public:

			/** Returns the singleton instance of this class */
			static Application* getInstance ();

			/** Initializes the application */
			void init (Delegate* delegate);

			/** Runs the application */
			void run ();


			/** Inner class */
			class Delegate
			{

			public:

				/** Will be called, when the application has launched */
				virtual void applicationDidLaunch () = 0;

				/** Will be called, when the application will terminate */
				virtual void applicationWillTerminate () = 0;
			};
		};

	} /* namespace core */
} /* namespace ca */

#endif /* APPLICATION_H_ */
