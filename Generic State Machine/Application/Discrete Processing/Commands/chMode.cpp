 
#include "chMode.h"
#include "EmbeddedSystemXState.h"
namespace Application
{
	namespace DiscreteProcessing
	{
		chMode::chMode()
		{
		}


		chMode::~chMode()
		{
		}

		void chMode::execute(EmbeddedSystemX* sys, EmbeddedSystemXState* state)
		{
			state->chMode(sys);
		}
	}
}