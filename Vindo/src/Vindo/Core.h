#pragma once

#ifdef VN_PLATFORM_WINDOWS
	#ifdef VN_BUILD_DLL
		#define VINDO_API __declspec(dllexport)
	#else
		#define VINDO_API __declspec(dllimport)
	#endif
#else
	#error Vindo only support Windows
#endif