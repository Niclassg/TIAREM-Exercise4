 
#include "Resume.h"
#include "EmbeddedSystemXState.h"
namespace Application
{
	namespace DiscreteProcessing
	{
		Resume::Resume()
		{
		}


		Resume::~Resume()
		{
		}


		void Resume::execute(EmbeddedSystemX* sys, EmbeddedSystemXState* state)
		{
			state->Resume(sys);
		}
	}
}