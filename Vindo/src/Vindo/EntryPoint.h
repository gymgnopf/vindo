#pragma once

#ifdef VN_PLATFORM_WINDOWS

extern Vindo::Application* Vindo::CreateApplication();

int main(int argc, char** argv) {
	printf("Vindo engine!");
	auto app = Vindo::CreateApplication();
	app->Run();
	delete app;
}

#endif