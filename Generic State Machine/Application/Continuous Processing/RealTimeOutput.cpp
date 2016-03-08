 
#include <iostream>
#include "RealTimeOutput.h"

namespace Application{
	namespace ContinuousProcessing {

		RealTimeOutput* RealTimeOutput::_instance = 0;

		RealTimeOutput* RealTimeOutput::Instance(void)
		{
			if (_instance == 0)
			{
				_instance = new RealTimeOutput;
			}
			return _instance;
		}

		RealTimeOutput::RealTimeOutput()
		{
		}


		RealTimeOutput::~RealTimeOutput()
		{
		}
		
		void RealTimeOutput::outputResult()
		{
			using namespace std;
			cout << "Realtime results are being displayed." << endl;
		}
	}
}