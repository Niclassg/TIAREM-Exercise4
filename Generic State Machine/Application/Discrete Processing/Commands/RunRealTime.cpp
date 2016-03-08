 
#include "RunRealTime.h"
#include "EmbeddedSystemXState.h"
namespace Application
{
	namespace DiscreteProcessing
	{
		RunRealTime::RunRealTime()
		{
		}


		RunRealTime::~RunRealTime()
		{
		}

		void RunRealTime::execute(EmbeddedSystemX* sys, EmbeddedSystemXState* state)
		{
			state->RunRealTime(sys);
		}
	}
}