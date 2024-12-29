#pragma once

#include "Core.h"

namespace Vindo {

	class VINDO_API Application
	{
	public:
		Application();
		virtual ~Application();
		void Run();
	};

	// To be defined in the client
	Application* CreateApplication();
}

