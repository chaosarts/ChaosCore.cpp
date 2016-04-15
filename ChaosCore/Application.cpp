/*
 * Application.cpp
 *
 *  Created on: 06.03.2016
 *      Author: chaos
 */

#include <cstdlib>
#include <cstdio>
#include "ChaosCore.hpp"
#include "Application.hpp"
#include "Exception.hpp"

extern unsigned char Manifest_xml[];
extern unsigned int Manifest_xml_len;

namespace chaos
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

	Application::Application()
	{
	}


	Application::~Application()
	{
		_delegate->applicationWillTerminate();
		delete _delegate;
	}


	/*
	 +-----------------------------------------------------
	 | METHODS
	 +-----------------------------------------------------
	 */

	void Application::init (AppDelegate* delegate)
	{
		_delegate = delegate;
				
	}


	void Application::run ()
	{
		if (!_delegate) throw new Exception("Application not initialized.\n");
		_delegate->applicationDidLaunch();
	}
} /* namespace ca */
