 
#include "RealTimeLoop.h"
#include "Ready.h"
#include "Suspended.h"
#include "Mode1.h"
#include "RealTimeExecution.h"
#include "PowerOnSelfTest.h"

namespace Application
{
	namespace DiscreteProcessing
	{
		RealTimeLoop* RealTimeLoop::_instance = 0;

		RealTimeLoop* RealTimeLoop::Instance(void)
		{
			if (_instance == 0)
			{
				_instance = new RealTimeLoop;
			}
			return _instance;
		}

		RealTimeLoop::RealTimeLoop(void)
		{
		}

		RealTimeLoop::~RealTimeLoop(void)
		{
		}

		void RealTimeLoop::Suspend(EmbeddedSystemX* sys)
		{
			sys->StopRealTimeThread();
			ChangeState(sys, Suspended::Instance());
		}

		void RealTimeLoop::Stop(EmbeddedSystemX* sys)
		{
			sys->StopRealTimeThread();
			ChangeState(sys, Ready::Instance());
		}

		void RealTimeLoop::Restart(EmbeddedSystemX* sys)
		{
			sys->StopRealTimeThread();
			ChangeState(sys, PowerOnSelfTest::Instance());
		}

		void RealTimeLoop::chMode(EmbeddedSystemX* sys)
		{
			sys->getStateApp()->chMode(sys);
		}

		void RealTimeLoop::Simulate(EmbeddedSystemX* sys)
		{
			sys->getStateSim()->Simulate(sys);
		}

		void RealTimeLoop::RunRealTime(EmbeddedSystemX* sys)
		{
			sys->getStateSim()->RunRealTime(sys);
		}
		void RealTimeLoop::eventX(EmbeddedSystemX* sys)
		{
			sys->getStateApp()->eventX(sys);
		}

		void RealTimeLoop::eventY(EmbeddedSystemX* sys)
		{
			sys->getStateApp()->eventY(sys);
		}

		void RealTimeLoop::entry(EmbeddedSystemX* sys)
		{
			ChangeState(sys, Mode1::Instance());
			ChangeState(sys, RealTimeExecution::Instance());
			sys->StartRealTimeThread();
		}
	}
}