 
#include <iostream>
#include "RealTimeInput.h"

namespace Application{
	namespace ContinuousProcessing {

		RealTimeInput* RealTimeInput::_instance = 0;

		RealTimeInput* RealTimeInput::Instance(void)
		{
			if (_instance == 0)
			{
				_instance = new RealTimeInput;
			}
			return _instance;
		}

		RealTimeInput::RealTimeInput()
		{
		}


		RealTimeInput::~RealTimeInput()
		{
		}
		
		void RealTimeInput::read()
		{
			using namespace std;
			cout << endl << "Reading realtime input." << endl;
		}
	}
}