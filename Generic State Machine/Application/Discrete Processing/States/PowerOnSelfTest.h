#pragma once
#include "embeddedsystemxstate.h"
namespace Application
{
	namespace DiscreteProcessing
	{
		class PowerOnSelfTest :
			public EmbeddedSystemXState
		{
		public:
			static PowerOnSelfTest* Instance();
			~PowerOnSelfTest(void);
			void SelfTestOk(EmbeddedSystemX* sys) override;
			void SelfTestFailed(EmbeddedSystemX* sys, int ErrorNo) override;
			void entry(EmbeddedSystemX* sys) override;
		private:
			static PowerOnSelfTest* _instance;
		protected:
			PowerOnSelfTest(void);
		};

	}
}