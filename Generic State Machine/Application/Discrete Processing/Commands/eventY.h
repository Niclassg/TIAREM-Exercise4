#pragma once
#include "Command.h"
namespace Application
{
	namespace DiscreteProcessing
	{
		class eventY :
			public Command
		{
		public:
			eventY();
			~eventY();
			void execute(EmbeddedSystemX* sys, EmbeddedSystemXState* state) override;
		};

	}
}