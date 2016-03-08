 
#include "Suspended.h"
#include "Ready.h"
#include "RealTimeLoop.h"
namespace Application
{
	namespace DiscreteProcessing
	{
		Suspended* Suspended::_instance = 0;

		Suspended* Suspended::Instance(void)
		{
			if (_instance == 0)
			{
				_instance = new Suspended;
			}
			return _instance;
		}

		Suspended::Suspended(void)
		{
		}


		Suspended::~Suspended(void)
		{
		}


		void Suspended::Resume(EmbeddedSystemX* sys)
		{
			ChangeState(sys, RealTimeLoop::Instance());
		}


		void Suspended::Stop(EmbeddedSystemX* sys)
		{
			ChangeState(sys, Ready::Instance());
		}

		void Suspended::entry(EmbeddedSystemX* sys)
		{
			sys->print("Suspended state entered.");
		}
	}
}