#pragma once
#include "Command.h"
#include "../Continuous Processing/Algorithm.h"
#include "../Continuous Processing/Input.h"
#include "../Continuous Processing/Output.h"

namespace Application
{
	namespace DiscreteProcessing
	{
		class EmbeddedSystemX
		{
		public:
			EmbeddedSystemX(void);
			~EmbeddedSystemX(void);

			void handleCommand(Command* pCmd);

			void print(int ErrorNo);
			void print(char* string);

			void systemSelfTest(void);
			void startInitializing(void);
			void readConfigurationInfo(void);

			void PerformConfigurationX(void);
			void responseM1eventX(void);
			void responseM2eventX(void);
			void responseM2eventY(void);
			void responseM3eventX(void);

			void exitStateMachine(void);

		private:
			friend class EmbeddedSystemXState;
			friend class ApplicationModeSetting;
			friend class SimulateRealTimeModeState;

			void ChangeState(EmbeddedSystemXState*);
			void ChangeState(ApplicationModeSetting*);
			void ChangeState(SimulateRealTimeModeState*);

			void SetInput(Application::ContinuousProcessing::Input*);
			void SetOutput(Application::ContinuousProcessing::Output*);
			void SetAlgorithm(Application::ContinuousProcessing::Algorithm*);

			EmbeddedSystemXState* _state;
			ApplicationModeSetting* _pAppSubState;
			SimulateRealTimeModeState* _pSimSubState;

			int VersionNo;
			char* Name;
		public:
			ApplicationModeSetting* getStateApp(void);
			SimulateRealTimeModeState* getStateSim(void);
			void StartRealTimeThread(void);
			void StopRealTimeThread(void);
		};

	}
}