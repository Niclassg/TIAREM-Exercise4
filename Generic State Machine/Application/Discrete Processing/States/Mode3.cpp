 
#include "Mode3.h"
#include "Mode1.h"
#include "../../Continuous Processing/Mode3Algorithm.h"

namespace Application
{
	namespace DiscreteProcessing
	{
		Mode3* Mode3::_instance = 0;

		Mode3* Mode3::Instance(void)
		{
			if (_instance == 0)
			{
				_instance = new Mode3;
			}
			return _instance;
		}

		Mode3::Mode3(void)
		{
		}


		Mode3::~Mode3(void)
		{
		}

		void Mode3::chMode(EmbeddedSystemX* sys)
		{
			ChangeState(sys, Mode1::Instance());
		}

		void Mode3::eventX(EmbeddedSystemX* sys)
		{
			sys->responseM3eventX();
		}

		void Mode3::entry(EmbeddedSystemX* sys)
		{
			sys->print("Mode3 state entered.");
			SetAlgorithm(sys, Application::ContinuousProcessing::Mode3Algorithm::Instance());
		}
	}
}