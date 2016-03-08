#pragma once
#include "Command.h"
namespace Application
{
	namespace DiscreteProcessing
	{
		class Initialized :
			public Command
		{
		public:
			Initialized();
			~Initialized();
			void execute(EmbeddedSystemX* sys, EmbeddedSystemXState* state) override;
		};

	}
}