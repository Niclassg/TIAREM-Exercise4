 
#include "Failure.h"
#include "PowerOnSelfTest.h"
namespace Application
{
	namespace DiscreteProcessing
	{
		Failure* Failure::_instance = 0;

		Failure* Failure::Instance(void)
		{
			if (_instance == 0)
			{
				_instance = new Failure;
			}
			return _instance;
		}

		Failure::Failure(void)
		{
		}


		Failure::~Failure(void)
		{
		}


		void Failure::Exit(EmbeddedSystemX* sys)
		{
			sys->exitStateMachine();
		}


		void Failure::Restart(EmbeddedSystemX* sys)
		{
			ChangeState(sys, PowerOnSelfTest::Instance());
		}
	}
}