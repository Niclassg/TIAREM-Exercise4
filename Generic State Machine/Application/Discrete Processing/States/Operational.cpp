 
#include "Operational.h"
#include "PowerOnSelfTest.h"
namespace Application
{
	namespace DiscreteProcessing
	{

		Operational::Operational(void)
		{
		}


		Operational::~Operational(void)
		{
		}

		void Operational::Restart(EmbeddedSystemX* sys)
		{
			ChangeState(sys, PowerOnSelfTest::Instance());
		}
	}
}