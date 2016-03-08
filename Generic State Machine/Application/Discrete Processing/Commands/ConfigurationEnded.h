#pragma once
#include "Command.h"
namespace Application
{
	namespace DiscreteProcessing
	{
		class ConfigurationEnded :
			public Command
		{
		public:
			ConfigurationEnded();
			~ConfigurationEnded();
			void execute(EmbeddedSystemX* sys, EmbeddedSystemXState* state) override;
		};

	}
}