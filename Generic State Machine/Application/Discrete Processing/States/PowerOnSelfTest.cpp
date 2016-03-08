 
#include "PowerOnSelfTest.h"
#include "Failure.h"
#include "Initializing.h"
namespace Application
{
	namespace DiscreteProcessing
	{

		PowerOnSelfTest* PowerOnSelfTest::_instance = 0;

		PowerOnSelfTest* PowerOnSelfTest::Instance(void)
		{
			if (_instance == 0)
			{
				_instance = new PowerOnSelfTest;
			}
			return _instance;
		}

		PowerOnSelfTest::PowerOnSelfTest(void)
		{
		}


		PowerOnSelfTest::~PowerOnSelfTest(void)
		{
		}


		void PowerOnSelfTest::SelfTestOk(EmbeddedSystemX* sys)
		{
			ChangeState(sys, Initializing::Instance());
		}


		void PowerOnSelfTest::SelfTestFailed(EmbeddedSystemX* sys, int ErrorNo)
		{
			sys->print(ErrorNo);
			ChangeState(sys, Failure::Instance());
		}


		void PowerOnSelfTest::entry(EmbeddedSystemX* sys)
		{
			sys->print("PowerOnSelfTest state entered.");
			sys->systemSelfTest();
		}
	}
}