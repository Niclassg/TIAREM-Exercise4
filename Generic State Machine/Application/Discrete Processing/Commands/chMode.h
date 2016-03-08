#pragma once
#include "Command.h"
namespace Application
{
	namespace DiscreteProcessing
	{
		class chMode :
			public Command
		{
		public:
			chMode();
			~chMode();
			void execute(EmbeddedSystemX* sys, EmbeddedSystemXState* state) override;
		};

	}
}