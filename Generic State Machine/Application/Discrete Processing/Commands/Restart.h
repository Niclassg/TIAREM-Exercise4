#pragma once
#include "Command.h"
namespace Application
{
	namespace DiscreteProcessing
	{
		class Restart :
			public Command
		{
		public:
			Restart();
			~Restart();
			void execute(EmbeddedSystemX* sys, EmbeddedSystemXState* state) override;
		};

	}
}