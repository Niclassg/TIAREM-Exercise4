 
#include "Start.h"
#include "EmbeddedSystemXState.h"
namespace Application
{
	namespace DiscreteProcessing
	{
		Start::Start()
		{
		}


		Start::~Start()
		{
		}


		void Start::execute(EmbeddedSystemX* sys, EmbeddedSystemXState* state)
		{
			state->Start(sys);
		}
	}
}