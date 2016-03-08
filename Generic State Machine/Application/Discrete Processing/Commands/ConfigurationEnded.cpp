 
#include "ConfigurationEnded.h"
#include "EmbeddedSystemXState.h"
namespace Application
{
	namespace DiscreteProcessing
	{

		ConfigurationEnded::ConfigurationEnded()
		{
		}


		ConfigurationEnded::~ConfigurationEnded()
		{
		}

		void ConfigurationEnded::execute(EmbeddedSystemX* sys, EmbeddedSystemXState* state)
		{
			state->ConfigurationEnded(sys);
		}
	}
}