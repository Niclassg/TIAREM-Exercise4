 
#include <iostream>
#include "SimulatedOutput.h"

namespace Application {
	namespace ContinuousProcessing {

		using namespace std;


		SimulatedOutput* SimulatedOutput::_instance = 0;

		SimulatedOutput* SimulatedOutput::Instance(void)
		{
			if (_instance == 0)
			{
				_instance = new SimulatedOutput;
			}
			return _instance;
		}

		SimulatedOutput::SimulatedOutput()
		{
		}


		SimulatedOutput::~SimulatedOutput()
		{
		}
		
		void SimulatedOutput::write()
		{
			
			cout << "Outputting simulated result." << endl;
		}
	}
}