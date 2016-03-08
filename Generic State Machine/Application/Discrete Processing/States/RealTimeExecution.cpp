 
#include "RealTimeExecution.h"
#include "Simulation.h"
#include "../../Continuous Processing/RealTimeInput.h"
#include "../../Continuous Processing/RealTimeOutput.h"

namespace Application
{
	namespace DiscreteProcessing
	{
		RealTimeExecution* RealTimeExecution::_instance = 0;

		RealTimeExecution* RealTimeExecution::Instance(void)
		{
			if (_instance == 0)
			{
				_instance = new RealTimeExecution();
			}
			return _instance;
		}

		RealTimeExecution::RealTimeExecution()
		{
		}


		RealTimeExecution::~RealTimeExecution()
		{
		}


		void RealTimeExecution::Simulate(EmbeddedSystemX* sys)
		{
			ChangeState(sys, Simulation::Instance());
		}


		void RealTimeExecution::entry(EmbeddedSystemX* sys)
		{
			sys->print("RealTimeExecution state entered.");
			SetInput(sys, Application::ContinuousProcessing::RealTimeInput::Instance());
			SetOutput(sys, Application::ContinuousProcessing::RealTimeOutput::Instance());
		}
	}
}