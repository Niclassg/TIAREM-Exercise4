#pragma once
#include "operational.h"
namespace Application
{
	namespace DiscreteProcessing
	{
		class RealTimeLoop :
			public Operational
		{
		public:
			static RealTimeLoop* Instance();
			~RealTimeLoop(void);
			void Suspend(EmbeddedSystemX* sys) override;
			void Stop(EmbeddedSystemX* sys) override;
			void Restart(EmbeddedSystemX* sys) override;
			void chMode(EmbeddedSystemX* sys) override;
			void Simulate(EmbeddedSystemX* sys) override;
			void RunRealTime(EmbeddedSystemX* sys) override;
			void eventX(EmbeddedSystemX* sys) override;
			void eventY(EmbeddedSystemX* sys) override;
			void entry(EmbeddedSystemX* sys) override;
		private:
			static RealTimeLoop* _instance;
		protected:
			RealTimeLoop(void);
		};

	}
}