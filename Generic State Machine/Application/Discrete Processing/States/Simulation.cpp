 
#include "Simulation.h"
#include "RealTimeExecution.h"
#include "../../Continuous Processing/SimulatedInput.h"
#include "../../Continuous Processing/SimulatedOutput.h"

namespace Application
{
	namespace DiscreteProcessing
	{
		Simulation* Simulation::_instance = 0;

		Simulation* Simulation::Instance(void)
		{
			if (_instance == 0)
			{
				_instance = new Simulation();
			}
			return _instance;
		}

		Simulation::Simulation()
		{
		}


		Simulation::~Simulation()
		{
		}


		void Simulation::RunRealTime(EmbeddedSystemX* sys)
		{
			ChangeState(sys, RealTimeExecution::Instance());
		}


		void Simulation::entry(EmbeddedSystemX* sys)
		{
			sys->print("Simulation state entered.");
			SetInput(sys, Application::ContinuousProcessing::SimulatedInput::Instance());
			SetOutput(sys, Application::ContinuousProcessing::SimulatedOutput::Instance());
		}
	}
}