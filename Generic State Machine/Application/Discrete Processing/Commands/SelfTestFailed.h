#pragma once
#include "Command.h"
namespace Application
{
	namespace DiscreteProcessing
	{
		class SelfTestFailed :
			public Command
		{
		public:
			SelfTestFailed(int ErrorNo);
			~SelfTestFailed();
			void execute(EmbeddedSystemX* sys, EmbeddedSystemXState* state) override;
		private:
			int ErrorNo;
		};

	}
}