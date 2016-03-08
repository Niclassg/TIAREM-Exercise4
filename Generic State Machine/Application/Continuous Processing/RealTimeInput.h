#pragma once
#include "Input.h"

namespace Application{
	namespace ContinuousProcessing {

		class RealTimeInput :
			public Application::ContinuousProcessing::Input
		{
		public:
			static RealTimeInput* Instance();
			~RealTimeInput();
			void read(void) override;
		private:
			static RealTimeInput* _instance;
		protected:
			RealTimeInput();
		};

	}
}