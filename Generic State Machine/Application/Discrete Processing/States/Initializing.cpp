 
#include "Initializing.h"
#include "Ready.h"
namespace Application
{
	namespace DiscreteProcessing
	{
		Initializing* Initializing::_instance = 0;

		Initializing* Initializing::Instance(void)
		{
			if (_instance == 0)
			{
				_instance = new Initializing;
			}
			return _instance;
		}

		Initializing::Initializing(void)
		{
		}


		Initializing::~Initializing(void)
		{
		}


		void Initializing::Initialized(EmbeddedSystemX* sys)
		{
			ChangeState(sys, Ready::Instance());
		}


		void Initializing::entry(EmbeddedSystemX* sys)
		{
			sys->print("Initializing state entered.");
			sys->startInitializing();
		}

	}
}