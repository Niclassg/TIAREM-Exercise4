#pragma once

namespace Application{
	namespace ContinuousProcessing {

		class Output
		{
		public:
			Output();
			~Output();
			virtual void write(void);
		};

	}
}