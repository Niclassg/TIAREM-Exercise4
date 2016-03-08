#pragma once
#include "Thread.h"
#include "Input.h"
#include "Output.h"
#include "Algorithm.h"
#include "../ProcessingMode.h"

namespace Application{
	namespace ContinuousProcessing {

		class ContinuousProcessingThread :
			public AbstractOS::Thread
		{
		public:
			ContinuousProcessingThread(ProcessingMode*);
			~ContinuousProcessingThread();
			void run(void) override;
			void setInput(void);
			void setOutput(void);
			void setAlgorithm(void);
		private:
			bool running = true;
			Input *pInput;
			Output *pOutput;
			Algorithm *pAlgorithm;
			ProcessingMode* pProcessingMode;
		};

	}
}