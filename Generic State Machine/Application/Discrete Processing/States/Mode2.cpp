 
#include "Mode2.h"
#include "Mode3.h"
#include "../../Continuous Processing/Mode2Algorithm.h"

namespace Application
{
	namespace DiscreteProcessing
	{
		Mode2* Mode2::_instance = 0;

		Mode2* Mode2::Instance(void)
		{
			if (_instance == 0)
			{
				_instance = new Mode2;
			}
			return _instance;
		}

		Mode2::Mode2(void)
		{
		}


		Mode2::~Mode2(void)
		{
		}


		void Mode2::chMode(EmbeddedSystemX* sys)
		{
			ChangeState(sys, Mode3::Instance());
		}


		void Mode2::eventX(EmbeddedSystemX* sys)
		{
			sys->responseM2eventX();
		}


		void Mode2::eventY(EmbeddedSystemX* sys)
		{
			sys->responseM2eventY();
		}

		void Mode2::entry(EmbeddedSystemX* sys)
		{
			sys->print("Mode2 state entered.");
			SetAlgorithm(sys, Application::ContinuousProcessing::Mode2Algorithm::Instance());
		}
	}
}