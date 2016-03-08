 
#include "Simulate.h"
#include "EmbeddedSystemXState.h"
namespace Application
{
	namespace DiscreteProcessing
	{
		Simulate::Simulate()
		{
		}


		Simulate::~Simulate()
		{
		}

		void Simulate::execute(EmbeddedSystemX* sys, EmbeddedSystemXState* state)
		{
			state->Simulate(sys);
		}
	}
}