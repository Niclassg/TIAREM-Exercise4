 
#include "EmbeddedSystemXState.h"
namespace Application
{
	namespace DiscreteProcessing
	{

		EmbeddedSystemXState::EmbeddedSystemXState(void)
		{
		}


		EmbeddedSystemXState::~EmbeddedSystemXState(void)
		{
		}

		void EmbeddedSystemXState::Initialized(EmbeddedSystemX* sys)
		{
			defaultBehavior(sys);
		}

		void EmbeddedSystemXState::Restart(EmbeddedSystemX* sys)
		{
			defaultBehavior(sys);
		}

		void EmbeddedSystemXState::Configure(EmbeddedSystemX* sys)
		{
			defaultBehavior(sys);
		}

		void EmbeddedSystemXState::ConfigurationEnded(EmbeddedSystemX* sys)
		{
			defaultBehavior(sys);
		}

		void EmbeddedSystemXState::Exit(EmbeddedSystemX* sys)
		{
			defaultBehavior(sys);
		}

		void EmbeddedSystemXState::Stop(EmbeddedSystemX* sys)
		{
			defaultBehavior(sys);
		}

		void EmbeddedSystemXState::Start(EmbeddedSystemX* sys)
		{
			defaultBehavior(sys);
		}

		void EmbeddedSystemXState::Suspend(EmbeddedSystemX* sys)
		{
			defaultBehavior(sys);
		}

		void EmbeddedSystemXState::Resume(EmbeddedSystemX* sys)
		{
			defaultBehavior(sys);
		}

		void EmbeddedSystemXState::ConfigX(EmbeddedSystemX* sys)
		{
			defaultBehavior(sys);
		}

		void EmbeddedSystemXState::chMode(EmbeddedSystemX* sys)
		{
			defaultBehavior(sys);
		}

		void EmbeddedSystemXState::eventX(EmbeddedSystemX* sys)
		{
			defaultBehavior(sys);
		}

		void EmbeddedSystemXState::eventY(EmbeddedSystemX* sys)
		{
			defaultBehavior(sys);
		}

		void EmbeddedSystemXState::SelfTestOk(EmbeddedSystemX* sys)
		{
			defaultBehavior(sys);
		}

		void EmbeddedSystemXState::SelfTestFailed(EmbeddedSystemX* sys, int ErrorNo)
		{
			defaultBehavior(sys);
		}

		void EmbeddedSystemXState::entry(EmbeddedSystemX* sys)
		{

		}

		void EmbeddedSystemXState::RunRealTime(EmbeddedSystemX* sys)
		{
			defaultBehavior(sys);
		}

		void EmbeddedSystemXState::Simulate(EmbeddedSystemX* sys)
		{
			defaultBehavior(sys);
		}

		void EmbeddedSystemXState::ChangeState(EmbeddedSystemX* sys, EmbeddedSystemXState* pS)
		{
			sys->ChangeState(pS);
		}

		void EmbeddedSystemXState::ChangeState(EmbeddedSystemX* sys, ApplicationModeSetting* pS)
		{
			sys->ChangeState(pS);
		}

		void EmbeddedSystemXState::ChangeState(EmbeddedSystemX* sys, SimulateRealTimeModeState* pS)
		{
			sys->ChangeState(pS);
		}

		void EmbeddedSystemXState::defaultBehavior(EmbeddedSystemX* sys)
		{
			sys->print("Not an action in this state");
		}
	}
}