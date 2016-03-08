#pragma once
#include "Command.h"
namespace Application
{
	namespace DiscreteProcessing
	{
		class eventX :
			public Command
		{
		public:
			eventX();
			~eventX();
			void execute(EmbeddedSystemX* sys, EmbeddedSystemXState* state) override;
		};

	}
}