#pragma once
#include "Command.h"
namespace Application
{
	namespace DiscreteProcessing
	{
		class Start :
			public Command
		{
		public:
			Start();
			~Start();
			void execute(EmbeddedSystemX* sys, EmbeddedSystemXState* state) override;
		};

	}
}