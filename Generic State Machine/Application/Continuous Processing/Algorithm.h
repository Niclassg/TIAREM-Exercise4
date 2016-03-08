#pragma once

namespace Application{
	namespace ContinuousProcessing {

		class Algorithm
		{
		public:
			Algorithm();
			~Algorithm();
			virtual void execute(void);
		};

	}
}