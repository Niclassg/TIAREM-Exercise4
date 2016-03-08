#pragma once
#include "../Abstract OS/Thread_Mutex.h"
#include "Continuous Processing\Input.h"
#include "Continuous Processing\Algorithm.h"
#include "Continuous Processing\Output.h"

namespace Application{

	using namespace ContinuousProcessing; 
	using namespace AbstractOS;

	class ProcessingMode
	{
	public:
		ProcessingMode();
		~ProcessingMode();
		void setInput(Input*);
		void setAlgortihm(Algorithm*);
		void setOutput(Output*);
		void setRunning(bool);
		Input* getInput();
		Algorithm* getAlgorithm();
		Output* getOutput();
		bool getRunning();
	private:
		Thread_Mutex lock_;
		Input *pInput;
		Algorithm *pAlgorithm;
		Output *pOutput;
		bool running;
	};

}