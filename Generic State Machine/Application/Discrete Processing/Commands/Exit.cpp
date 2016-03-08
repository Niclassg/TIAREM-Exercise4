 
#include "Exit.h"
#include "EmbeddedSystemXState.h"
namespace Application
{
	namespace DiscreteProcessing
	{
		Exit::Exit()
		{
		}


		Exit::~Exit()
		{
		}


		void Exit::execute(EmbeddedSystemX* sys, EmbeddedSystemXState* state)
		{
			state->Exit(sys);
		}
	}
}