 
#include "Suspend.h"
#include "EmbeddedSystemXState.h"
namespace Application
{
	namespace DiscreteProcessing
	{
		Suspend::Suspend()
		{
		}


		Suspend::~Suspend()
		{
		}


		void Suspend::execute(EmbeddedSystemX* sys, EmbeddedSystemXState* state)
		{
			state->Suspend(sys);
		}
	}
}