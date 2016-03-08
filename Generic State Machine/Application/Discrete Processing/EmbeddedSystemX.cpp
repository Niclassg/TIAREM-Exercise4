#include <iostream>
#include "EmbeddedSystemX.h"
#include "PowerOnSelfTest.h"
#include "Mode1.h"
#include "Simulation.h"
#include "../Continuous Processing/Mode1Algorithm.h"
#include "../Continuous Processing/Mode2Algorithm.h"
#include "../Continuous Processing/Mode3Algorithm.h"
#include "../Continuous Processing/SimulatedInput.h"
#include "../Continuous Processing/RealTimeInput.h"
#include "../Continuous Processing/SimulatedOutput.h"
#include "../Continuous Processing/RealTimeOutput.h"
#include "../ProcessingMode.h"
#include "../Continuous Processing/ContinuousProcessingThread.h"


namespace Application
{
	namespace DiscreteProcessing
	{

		EmbeddedSystemXState* _state;
		ApplicationModeSetting* _pAppSubState;
		SimulateRealTimeModeState* _pSimSubState;
		
		using namespace ContinuousProcessing;

		using namespace std;

		ProcessingMode processingMode;
		ContinuousProcessingThread cThread = ContinuousProcessingThread(&processingMode); 


		EmbeddedSystemX::EmbeddedSystemX(void)
		{
			//Create all concrete strategy singletons.
			Mode1Algorithm::Instance();
			Mode2Algorithm::Instance();
			Mode3Algorithm::Instance();

			SimulatedInput::Instance();
			RealTimeInput::Instance();

			SimulatedOutput::Instance();
			RealTimeOutput::Instance();

			_state = PowerOnSelfTest::Instance();
			_state->entry(this);
		}


		EmbeddedSystemX::~EmbeddedSystemX(void)
		{
			delete _state;
			delete _pAppSubState;
			delete _pSimSubState;
		}

		void EmbeddedSystemX::handleCommand(Command* pCmd)
		{
			pCmd->execute(this, _state);
			delete pCmd;
		}


		void EmbeddedSystemX::ChangeState(EmbeddedSystemXState* pSys)
		{
			_state = pSys;
			_state->entry(this);
		}

		void EmbeddedSystemX::ChangeState(ApplicationModeSetting* pSys)
		{
			_pAppSubState = pSys;
			_pAppSubState->entry(this);
		}

		void EmbeddedSystemX::ChangeState(SimulateRealTimeModeState* pSys)
		{
			_pSimSubState = pSys;
			_pSimSubState->entry(this);
		}

		void EmbeddedSystemX::SetInput(Input* in)
		{
			processingMode.setInput(in);
		}

		void EmbeddedSystemX::SetOutput(Output* out)
		{
			processingMode.setOutput(out);
		}

		void EmbeddedSystemX::SetAlgorithm(Algorithm* alg)
		{
			processingMode.setAlgortihm(alg);
		}

		void EmbeddedSystemX::StartRealTimeThread(void)
		{
			processingMode.setRunning(true);
			cThread.start();
		}

		void EmbeddedSystemX::StopRealTimeThread(void)
		{
			processingMode.setRunning(false);
		}

		ApplicationModeSetting* EmbeddedSystemX::getStateApp(void)
		{
			return _pAppSubState;
		}

		SimulateRealTimeModeState* EmbeddedSystemX::getStateSim(void)
		{
			return _pSimSubState;
		}

		void EmbeddedSystemX::print(int ErrorNo)
		{
			
			cout << "SelfTestFailed: " << ErrorNo << endl;
		}

		void EmbeddedSystemX::print(char* string)
		{
			
			cout << string << endl;
		}


		void EmbeddedSystemX::systemSelfTest()
		{
			print("Running selftest");
		}


		void EmbeddedSystemX::startInitializing()
		{
			print("Initializing");
		}


		void EmbeddedSystemX::readConfigurationInfo()
		{
			print("Reading configuration info.");
		}


		void EmbeddedSystemX::PerformConfigurationX()
		{
			print("Performing configuration.");
		}


		void EmbeddedSystemX::responseM1eventX()
		{
			print("Running ResponseM1eventX");
		}


		void EmbeddedSystemX::responseM2eventX()
		{
			print("Running ResponseM2eventX");
		}


		void EmbeddedSystemX::responseM2eventY()
		{
			print("Running ResponseM2eventY");
		}


		void EmbeddedSystemX::responseM3eventX()
		{
			print("Running ResponseM3eventX");
		}


		void EmbeddedSystemX::exitStateMachine()
		{
			print("Exit state machine.");
		}
	}
}