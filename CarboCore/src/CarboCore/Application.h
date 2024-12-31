#pragma once
#include "Core.h"

namespace CarboCore {
	class CC_API Application {
	public: 
		Application();

		virtual ~Application();

		void Run();
	};

	//to be defined in Client
	Application* CreateApplication();
}

