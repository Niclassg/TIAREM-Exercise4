 
#include <iostream>
#include "SimulatedInput.h"

namespace Application{
	namespace ContinuousProcessing {

		SimulatedInput* SimulatedInput::_instance = 0;

		SimulatedInput* SimulatedInput::Instance(void)
		{
			if (_instance == 0)
			{
				_instance = new SimulatedInput;
			}
			return _instance;
		}

		SimulatedInput::SimulatedInput()
		{
		}


		SimulatedInput::~SimulatedInput()
		{
		}
		
		void SimulatedInput::read()
		{
			using namespace std;
			cout << endl << "Reading simulated input." << endl;
		}
	}
}