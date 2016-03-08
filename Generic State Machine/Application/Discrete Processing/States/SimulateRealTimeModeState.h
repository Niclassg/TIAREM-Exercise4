#pragma once
#include "EmbeddedSystemX.h"
#include "../../Continuous Processing/Input.h"
#include "../../Continuous Processing/Output.h"

namespace Application
{
	namespace DiscreteProcessing
	{
		class SimulateRealTimeModeState
		{
		public:
			virtual ~SimulateRealTimeModeState();
			virtual void entry(EmbeddedSystemX*);
			virtual void RunRealTime(EmbeddedSystemX*);
			virtual void Simulate(EmbeddedSystemX*);
		protected:
			SimulateRealTimeModeState();
			void ChangeState(EmbeddedSystemX*, SimulateRealTimeModeState*);
			void SetInput(EmbeddedSystemX*, Application::ContinuousProcessing::Input*);
			void SetOutput(EmbeddedSystemX*, Application::ContinuousProcessing::Output*);
		};

	}
}