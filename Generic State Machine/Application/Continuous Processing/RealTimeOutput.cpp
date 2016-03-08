 
#include <iostream>
#include "RealTimeOutput.h"

namespace Application{
	namespace ContinuousProcessing {

		using namespace std;

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
		
		void RealTimeOutput::write()
		{
			
			cout << "Outputting realtime results." << endl;
		}
	}
}