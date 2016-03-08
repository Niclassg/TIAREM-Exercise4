#pragma once
#include "Command.h"
namespace Application
{
	namespace DiscreteProcessing
	{
		class Suspend :
			public Command
		{
		public:
			Suspend();
			~Suspend();
			void execute(EmbeddedSystemX* sys, EmbeddedSystemXState* state) override;
		};

	}
}