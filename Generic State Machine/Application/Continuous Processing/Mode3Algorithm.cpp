 
#include <iostream>
#include "Mode3Algorithm.h"

namespace Application{
	namespace ContinuousProcessing {

		Mode3Algorithm* Mode3Algorithm::_instance = 0;

		Mode3Algorithm* Mode3Algorithm::Instance(void)
		{
			if (_instance == 0)
			{
				_instance = new Mode3Algorithm;
			}
			return _instance;
		}
		
		Mode3Algorithm::Mode3Algorithm()
		{
		}


		Mode3Algorithm::~Mode3Algorithm()
		{
		}
		
		void Mode3Algorithm::execute()
		{
			using namespace std;
			cout << "Executing Mode3" << endl;
		}
	}
}