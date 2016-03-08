 
#include "Configure.h"
#include "EmbeddedSystemXState.h"
namespace Application
{
	namespace DiscreteProcessing
	{
		Configure::Configure()
		{
		}


		Configure::~Configure()
		{
		}


		void Configure::execute(EmbeddedSystemX* sys, EmbeddedSystemXState* state)
		{
			state->Configure(sys);
		}
	}
}