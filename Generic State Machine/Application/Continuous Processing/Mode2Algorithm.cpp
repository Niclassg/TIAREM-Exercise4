 
#include <iostream>
#include "Mode2Algorithm.h"

namespace Application{
	namespace ContinuousProcessing {

		Mode2Algorithm* Mode2Algorithm::_instance = 0;

		Mode2Algorithm* Mode2Algorithm::Instance(void)
		{
			if (_instance == 0)
			{
				_instance = new Mode2Algorithm;
			}
			return _instance;
		}
		Mode2Algorithm::Mode2Algorithm()
		{
		}


		Mode2Algorithm::~Mode2Algorithm()
		{
		}
		
		void Mode2Algorithm::execute()
		{
			using namespace std;
			cout << "Executing Mode2" << endl;
		}
	}
}