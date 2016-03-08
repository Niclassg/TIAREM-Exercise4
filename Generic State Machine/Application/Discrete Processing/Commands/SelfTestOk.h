#pragma once
#include "Command.h"
namespace Application
{
	namespace DiscreteProcessing
	{
		class SelfTestOk :
			public Command
		{
		public:
			SelfTestOk();
			~SelfTestOk();
			void execute(EmbeddedSystemX* sys, EmbeddedSystemXState* state) override;
		};

	}
}