 
#include "SimulateRealTimeModeState.h"
namespace Application
{
	namespace DiscreteProcessing
	{

		SimulateRealTimeModeState::SimulateRealTimeModeState()
		{
		}


		SimulateRealTimeModeState::~SimulateRealTimeModeState()
		{
		}

		void SimulateRealTimeModeState::entry(EmbeddedSystemX* sys)
		{

		}

		void SimulateRealTimeModeState::RunRealTime(EmbeddedSystemX* sys)
		{

		}

		void SimulateRealTimeModeState::Simulate(EmbeddedSystemX* sys)
		{

		}

		void SimulateRealTimeModeState::ChangeState(EmbeddedSystemX* sys, SimulateRealTimeModeState* pS)
		{
			sys->ChangeState(pS);
		}

		void SimulateRealTimeModeState::SetInput(EmbeddedSystemX* sys, Application::ContinuousProcessing::Input* pIn)
		{
			sys->SetInput(pIn);
		}

		void SimulateRealTimeModeState::SetOutput(EmbeddedSystemX* sys, Application::ContinuousProcessing::Output* pOut)
		{
			sys->SetOutput(pOut);
		}
	}
}