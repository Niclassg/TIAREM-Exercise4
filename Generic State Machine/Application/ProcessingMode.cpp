#include "ProcessingMode.h"
#include "../Abstract OS/Thread_Mutex_Guard.h"

namespace Application{

	ProcessingMode::ProcessingMode()
	{
		running = true;
	}

	ProcessingMode::~ProcessingMode()
	{
	}
	
	void ProcessingMode::setInput(Input *in)
	{
		Thread_Mutex_Guard guard(lock_);
		pInput = in;
	}

	void ProcessingMode::setAlgortihm(Algorithm *al)
	{
		Thread_Mutex_Guard guard(lock_);
		pAlgorithm = al;
	}

	void ProcessingMode::setOutput(Output *out)
	{
		Thread_Mutex_Guard guard(lock_);
		pOutput = out;
	}

	void ProcessingMode::setRunning(bool run)
	{
		Thread_Mutex_Guard guard(lock_);
		running = run;
	}


	Input* ProcessingMode::getInput()
	{
		Thread_Mutex_Guard guard(lock_);
		return pInput;
	}

	Algorithm* ProcessingMode::getAlgorithm()
	{
		Thread_Mutex_Guard guard(lock_);
		return pAlgorithm;
	}

	Output* ProcessingMode::getOutput()
	{
		Thread_Mutex_Guard guard(lock_);
		return pOutput;
	}

	bool ProcessingMode::getRunning()
	{
		Thread_Mutex_Guard guard(lock_);
		return running;
	}
}