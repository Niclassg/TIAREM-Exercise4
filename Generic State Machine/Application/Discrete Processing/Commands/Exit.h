#pragma once
#include "Command.h"
namespace Application
{
	namespace DiscreteProcessing
	{
		class Exit :
			public Command
		{
		public:
			Exit();
			~Exit();
			void execute(EmbeddedSystemX* sys, EmbeddedSystemXState* state) override;
		};

	}
}