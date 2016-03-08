#pragma once
#include "Command.h"
namespace Application
{
	namespace DiscreteProcessing
	{
		class ConfigX :
			public Command
		{
		public:
			ConfigX();
			~ConfigX();
			void execute(EmbeddedSystemX* sys, EmbeddedSystemXState* state) override;
		};

	}
}