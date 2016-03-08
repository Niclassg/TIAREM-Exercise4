#pragma once
#include "Output.h"

namespace Application{
	namespace ContinuousProcessing {

		class SimulatedOutput :
			public Application::ContinuousProcessing::Output
		{
		public:
			static SimulatedOutput* Instance();
			~SimulatedOutput();
			void write(void) override;
		private:
			static SimulatedOutput* _instance;
		protected:
			SimulatedOutput();
		};

	}
}