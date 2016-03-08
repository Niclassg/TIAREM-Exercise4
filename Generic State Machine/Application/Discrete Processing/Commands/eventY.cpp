 
#include "eventY.h"
#include "EmbeddedSystemXState.h"
namespace Application
{
	namespace DiscreteProcessing
	{
		eventY::eventY()
		{
		}


		eventY::~eventY()
		{
		}


		void eventY::execute(EmbeddedSystemX* sys, EmbeddedSystemXState* state)
		{
			state->eventY(sys);
		}
	}
}