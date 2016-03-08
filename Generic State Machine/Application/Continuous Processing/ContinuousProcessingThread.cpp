 
#include "ContinuousProcessingThread.h"

namespace Application{
	namespace ContinuousProcessing {

		ContinuousProcessingThread::ContinuousProcessingThread(ProcessingMode* pMode)
		{
			pProcessingMode = pMode;
		}


		ContinuousProcessingThread::~ContinuousProcessingThread()
		{
		}
		
		void ContinuousProcessingThread::run()
		{
			while (pProcessingMode->getRunning())
			{
				setInput();
				pInput->read();

				setAlgorithm();
				pAlgorithm->execute();

				setOutput();
				pOutput->write();
				Sleep(2000);
			}
		}

		void ContinuousProcessingThread::setInput()
		{
			pInput = pProcessingMode->getInput();
		}

		void ContinuousProcessingThread::setOutput()
		{
			pOutput = pProcessingMode->getOutput();
		}

		void ContinuousProcessingThread::setAlgorithm()
		{
			pAlgorithm = pProcessingMode->getAlgorithm();
		}

	}
}