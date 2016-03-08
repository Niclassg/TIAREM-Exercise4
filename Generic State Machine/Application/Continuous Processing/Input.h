#pragma once

namespace Application{
	namespace ContinuousProcessing {

		class Input
		{
		public:
			Input();
			~Input();
			virtual void read(void);
		};

	}
}