#include "Application\Discrete Processing\DiscreteProcessingThread.h"
#include "Application\Continuous Processing\ContinuousProcessingThread.h"
#include "Application\Continuous Processing\Mode1Algorithm.h"
#include "Application\Continuous Processing\RealTimeInput.h"
#include "Application\Continuous Processing\RealTimeOutput.h"
#include "Application\ProcessingMode.h"

int main()
{
	using namespace Application;
	using namespace Application::DiscreteProcessing;
	using namespace Application::ContinuousProcessing;
	
	
	DiscreteProcessingThread dThread = DiscreteProcessingThread();

	dThread.start();
	
	while (1)
	{

	}
	return 0;
}
