 
#include "Mode1.h"
#include "Mode2.h"
#include "../../Continuous Processing/Mode1Algorithm.h"

namespace Application
{
	namespace DiscreteProcessing
	{
		Mode1* Mode1::_instance = 0;

		Mode1* Mode1::Instance(void)
		{
			if (_instance == 0)
			{
				_instance = new Mode1;
			}
			return _instance;
		}

		Mode1::Mode1(void)
		{
		}


		Mode1::~Mode1(void)
		{
		}

		
		void Mode1::chMode(EmbeddedSystemX* sys)
		{
			ChangeState(sys, Mode2::Instance());
		}


		void Mode1::eventX(EmbeddedSystemX* sys)
		{
			sys->responseM1eventX();
		}

		void Mode1::entry(EmbeddedSystemX* sys)
		{
			sys->print("Mode1 state entered."); 
			SetAlgorithm(sys, Application::ContinuousProcessing::Mode1Algorithm::Instance());
		}
	}
}