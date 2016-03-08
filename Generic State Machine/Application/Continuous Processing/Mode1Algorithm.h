#pragma once
#include "Algorithm.h"

namespace Application{
	namespace ContinuousProcessing {

		class Mode1Algorithm :
			public Application::ContinuousProcessing::Algorithm
		{
		public:
			static Mode1Algorithm* Instance();
			~Mode1Algorithm();
			void execute(void) override;
		private:
			static Mode1Algorithm* _instance;
		protected:
			Mode1Algorithm();
		};

	}
}