#pragma once
#include "Algorithm.h"

namespace Application{
	namespace ContinuousProcessing {

		class Mode3Algorithm :
			public Application::ContinuousProcessing::Algorithm
		{
		public:
			static Mode3Algorithm* Instance();
			~Mode3Algorithm();
			void execute(void) override;
		private:
			static Mode3Algorithm* _instance;
		protected:
			Mode3Algorithm();
		};

	}
}