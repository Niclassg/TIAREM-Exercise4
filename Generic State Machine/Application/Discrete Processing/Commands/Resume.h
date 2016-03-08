#pragma once
#include "Command.h"
namespace Application
{
	namespace DiscreteProcessing
	{
		class Resume :
			public Command
		{
		public:
			Resume();
			~Resume();
			void execute(EmbeddedSystemX* sys, EmbeddedSystemXState* state) override;
		};

	}
}