#pragma once
#include "embeddedsystemxstate.h"
namespace Application
{
	namespace DiscreteProcessing
	{
		class Operational :
			public EmbeddedSystemXState
		{
		public:
			virtual ~Operational(void);
			void Restart(EmbeddedSystemX* sys) override;
		protected:
			Operational(void);
		};

	}
}