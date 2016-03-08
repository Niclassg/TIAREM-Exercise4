 
#include "SelfTestOk.h"
#include "EmbeddedSystemXState.h"
namespace Application
{
	namespace DiscreteProcessing
	{
		SelfTestOk::SelfTestOk()
		{
		}


		SelfTestOk::~SelfTestOk()
		{
		}


		void SelfTestOk::execute(EmbeddedSystemX* sys, EmbeddedSystemXState* state)
		{
			state->SelfTestOk(sys);
		}
	}
}