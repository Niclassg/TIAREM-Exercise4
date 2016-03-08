#pragma once
#include "EmbeddedSystemX.h"

namespace Application
{
	namespace DiscreteProcessing
	{
		class EmbeddedSystemXState
		{
		public:
			virtual ~EmbeddedSystemXState(void);
			virtual void Initialized(EmbeddedSystemX* sys);
			virtual void Restart(EmbeddedSystemX* sys);
			virtual void Configure(EmbeddedSystemX* sys);
			virtual void ConfigurationEnded(EmbeddedSystemX* sys);
			virtual void Exit(EmbeddedSystemX* sys);
			virtual void Stop(EmbeddedSystemX* sys);
			virtual void Start(EmbeddedSystemX* sys);
			virtual void Suspend(EmbeddedSystemX* sys);
			virtual void Resume(EmbeddedSystemX* sys);
			virtual void ConfigX(EmbeddedSystemX* sys);
			virtual void chMode(EmbeddedSystemX* sys);
			virtual void eventX(EmbeddedSystemX* sys);
			virtual void eventY(EmbeddedSystemX* sys);
			virtual void SelfTestOk(EmbeddedSystemX* sys);
			virtual void SelfTestFailed(EmbeddedSystemX* sys, int ErrorNo);
			virtual void entry(EmbeddedSystemX* sys);
			virtual void Simulate(EmbeddedSystemX* sys);
			virtual void RunRealTime(EmbeddedSystemX* sys);
		private:
			void defaultBehavior(EmbeddedSystemX* sys);
		protected:
			EmbeddedSystemXState(void);
			void ChangeState(EmbeddedSystemX* sys, EmbeddedSystemXState* pS);
			void ChangeState(EmbeddedSystemX* sys, ApplicationModeSetting* pS);
			void ChangeState(EmbeddedSystemX* sys, SimulateRealTimeModeState* pS);
		};

	}
}