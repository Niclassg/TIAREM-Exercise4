#pragma once
#include "Command.h"
namespace Application
{
	namespace DiscreteProcessing
	{
		class Configure :
			public Command
		{
		public:
			Configure();
			~Configure();
			void execute(EmbeddedSystemX* sys, EmbeddedSystemXState* state) override;
		};

	}
}