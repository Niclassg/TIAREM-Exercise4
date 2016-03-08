 
#include "Stop.h"
#include "EmbeddedSystemXState.h"
namespace Application
{
	namespace DiscreteProcessing
	{
		Stop::Stop()
		{
		}


		Stop::~Stop()
		{
		}


		void Stop::execute(EmbeddedSystemX* sys, EmbeddedSystemXState* state)
		{
			state->Stop(sys);
		}
	}
}