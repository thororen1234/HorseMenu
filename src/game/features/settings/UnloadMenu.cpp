#include "core/commands/Command.hpp"
#include "core/commands/Commands.hpp"
#include "game/backend/Self.hpp"

namespace YimMenu::Features
{
	class UnloadMenu : public Command
	{
		using Command::Command;

		virtual void OnCall() override
		{
			Commands::Shutdown();
			g_Running = false;
		}
	};

	static UnloadMenu _UnloadMenu{"unloadmenu", "Unload", "Unload Terminus."};
}