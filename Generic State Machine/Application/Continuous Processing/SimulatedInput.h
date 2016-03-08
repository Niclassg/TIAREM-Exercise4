#pragma once
#include "Input.h"

namespace Application{
	namespace ContinuousProcessing {

		class SimulatedInput :
			public Application::ContinuousProcessing::Input
		{
		public:
			static SimulatedInput* Instance();
			~SimulatedInput();
			void read(void) override;
		private:
			static SimulatedInput* _instance;
		protected:
			SimulatedInput();
		};

	}
}