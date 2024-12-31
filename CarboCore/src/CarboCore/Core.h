#pragma once

#ifdef CC_PLATFORM_WINDOWS
	#ifdef CC_BUILD_DLL
		#define CC_API __declspec(dllexport)
	#else 
		#define CC_API __declspec(dllimport)
	#endif
#else
	#error NOT SUPPORTED
#endif