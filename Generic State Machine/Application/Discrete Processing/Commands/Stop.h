#pragma once
#include "Command.h"
namespace Application
{
	namespace DiscreteProcessing
	{
		class Stop :
			public Command
		{
		public:
			Stop();
			~Stop();
			void execute(EmbeddedSystemX* sys, EmbeddedSystemXState* state) override;
		};

	}
}