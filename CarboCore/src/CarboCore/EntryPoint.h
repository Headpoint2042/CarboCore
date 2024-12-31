#pragma once

#ifdef CC_PLATFORM_WINDOWS

extern CarboCore::Application* CarboCore::CreateApplication();

int main(int argc, char** argv) {
	
	auto app = CarboCore::CreateApplication();
	app->Run();
	delete app;
}
#endif