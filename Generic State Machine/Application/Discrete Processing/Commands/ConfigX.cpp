 
#include "ConfigX.h"
#include "EmbeddedSystemXState.h"
namespace Application
{
	namespace DiscreteProcessing
	{
		ConfigX::ConfigX()
		{
		}


		ConfigX::~ConfigX()
		{
		}


		void ConfigX::execute(EmbeddedSystemX* sys, EmbeddedSystemXState* state)
		{
			state->ConfigX(sys);
		}
	}
}