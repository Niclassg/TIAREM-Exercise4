#pragma once
#include "Command.h"
namespace Application
{
	namespace DiscreteProcessing
	{
		class Simulate :
			public Command
		{
		public:
			Simulate();
			~Simulate();
			void execute(EmbeddedSystemX* sys, EmbeddedSystemXState* state) override;
		};

	}
}