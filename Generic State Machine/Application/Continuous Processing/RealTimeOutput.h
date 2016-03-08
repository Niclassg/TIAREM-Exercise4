#pragma once
#include "Output.h"

namespace Application{
	namespace ContinuousProcessing {

		class RealTimeOutput :
			public Application::ContinuousProcessing::Output
		{
		public:
			static RealTimeOutput* Instance();
			~RealTimeOutput();
			void outputResult(void) override;
		private:
			static RealTimeOutput* _instance;
		protected:
			RealTimeOutput();
		};

	}
}