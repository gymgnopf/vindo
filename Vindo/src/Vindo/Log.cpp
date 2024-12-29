#include "Log.h"
#include <memory>
#include "spdlog/sinks/stdout_color_sinks.h"


namespace Vindo
{
	std::shared_ptr<spdlog::logger> s_CoreLogger;
	std::shared_ptr<spdlog::logger> s_ClientLogger;

	void Log::Init()
	{
		spdlog::set_pattern("%^[%T] %n: %v%$");
		s_CoreLogger = spdlog::stdout_color_mt("VINDO");
		s_CoreLogger->set_level(spdlog::level::trace);
		s_ClientLogger = spdlog::stdout_color_mt("VINDO APP");
		s_ClientLogger->set_level(spdlog::level::trace);

	}
}