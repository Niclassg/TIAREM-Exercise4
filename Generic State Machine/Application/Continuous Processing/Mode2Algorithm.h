#pragma once
#include "Algorithm.h"

namespace Application{
	namespace ContinuousProcessing {

		class Mode2Algorithm :
			public Application::ContinuousProcessing::Algorithm
		{
		public:
			static Mode2Algorithm* Instance();
			~Mode2Algorithm();
			void execute(void) override;
		private:
			static Mode2Algorithm* _instance;
		protected:
			Mode2Algorithm();
		};

	}
}