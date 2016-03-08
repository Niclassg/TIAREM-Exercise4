 
#include "Initialized.h"
#include "EmbeddedSystemXState.h"
namespace Application
{
	namespace DiscreteProcessing
	{
		Initialized::Initialized()
		{
		}


		Initialized::~Initialized()
		{
		}


		void Initialized::execute(EmbeddedSystemX* sys, EmbeddedSystemXState* state)
		{
			state->Initialized(sys);
		}
	}
}