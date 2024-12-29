#include <Vindo.h>

class SandboxApp : public Vindo::Application
{
public:
	SandboxApp() {

	}
	~SandboxApp() {

	}
};

Vindo::Application* Vindo::CreateApplication()
{
	return new SandboxApp();
}