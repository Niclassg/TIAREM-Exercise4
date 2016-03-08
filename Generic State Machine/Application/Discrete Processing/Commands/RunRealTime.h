#pragma once
#include "Command.h"
namespace Application
{
	namespace DiscreteProcessing
	{
		class RunRealTime :
			public Command
		{
		public:
			RunRealTime();
			~RunRealTime();
			void execute(EmbeddedSystemX* sys, EmbeddedSystemXState* state) override;
		};

	}
}