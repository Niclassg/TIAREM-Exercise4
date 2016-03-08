 
#include "eventX.h"
#include "EmbeddedSystemXState.h"
namespace Application
{
	namespace DiscreteProcessing
	{
		eventX::eventX()
		{
		}


		eventX::~eventX()
		{
		}


		void eventX::execute(EmbeddedSystemX* sys, EmbeddedSystemXState* state)
		{
			state->eventX(sys);
		}
	}
}