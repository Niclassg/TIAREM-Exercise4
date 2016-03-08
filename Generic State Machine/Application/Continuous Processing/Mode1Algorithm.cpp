 
#include <iostream>
#include "Mode1Algorithm.h"

namespace Application{
	namespace ContinuousProcessing {

		Mode1Algorithm* Mode1Algorithm::_instance = 0;

		Mode1Algorithm* Mode1Algorithm::Instance(void)
		{
			if (_instance == 0)
			{
				_instance = new Mode1Algorithm;
			}
			return _instance;
		}

		Mode1Algorithm::Mode1Algorithm()
		{
		}


		Mode1Algorithm::~Mode1Algorithm()
		{
		}
		
		void Mode1Algorithm::execute()
		{
			using namespace std;
			cout << "Executing Mode1" << endl;
		}
	}
}