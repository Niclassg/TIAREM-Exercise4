 
#include "SelfTestFailed.h"
#include "EmbeddedSystemXState.h"
namespace Application
{
	namespace DiscreteProcessing
	{
		SelfTestFailed::SelfTestFailed(int ErrorNo)
		{
			this->ErrorNo = ErrorNo;
		}


		SelfTestFailed::~SelfTestFailed()
		{
		}


		void SelfTestFailed::execute(EmbeddedSystemX* sys, EmbeddedSystemXState* state)
		{
			state->SelfTestFailed(sys, ErrorNo);
		}
	}
}