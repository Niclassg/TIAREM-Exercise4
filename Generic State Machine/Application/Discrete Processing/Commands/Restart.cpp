 
#include "Restart.h"
#include "EmbeddedSystemXState.h"
namespace Application
{
	namespace DiscreteProcessing
	{
		Restart::Restart()
		{
		}


		Restart::~Restart()
		{
		}


		void Restart::execute(EmbeddedSystemX* sys, EmbeddedSystemXState* state)
		{
			state->Restart(sys);
		}
	}
}