#pragma once
#include "Thread.h"

namespace Application{
	namespace DiscreteProcessing {

		class DiscreteProcessingThread :
			public AbstractOS::Thread
		{
		public:
			DiscreteProcessingThread();
			~DiscreteProcessingThread();
			void run(void) override;

		private:
			void showInputs();
		};

	}
}