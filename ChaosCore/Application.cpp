/*
 * Application.cpp
 *
 *  Created on: 06.03.2016
 *      Author: chaos
 */

#include "Application.h"

namespace ca
{
	namespace core
	{
		/*
		 +-----------------------------------------------------
		 | STATIC
		 +-----------------------------------------------------
		 */

		Application* Application::_instance = new Application();

		Application* Application::getInstance() {
			return _instance;
		}


		/*
		 +-----------------------------------------------------
		 | CONSTRUCTORS & DESTRUCTORS
		 +-----------------------------------------------------
		 */

		Application::Application() {}


		Application::~Application()
		{
			_delegate->applicationWillTerminate();
		}


		/*
		 +-----------------------------------------------------
		 | METHODS
		 +-----------------------------------------------------
		 */

		void Application::init (Delegate* delegate)
		{
			_delegate = delegate;
		}


		void Application::run ()
		{
			if (!_delegate)
			{
				fprintf(stderr, "Application not initialized.\n");
				exit(0);
			}

			_delegate->applicationDidLaunch();
		}
	} /* namespace core */
} /* namespace ca */
