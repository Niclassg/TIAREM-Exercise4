#pragma once
#include "EmbeddedSystemX.h"
#include "../../Continuous Processing/Algorithm.h"

namespace Application
{
	namespace DiscreteProcessing
	{
		class ApplicationModeSetting
		{
		public:
			virtual ~ApplicationModeSetting();
			virtual void entry(EmbeddedSystemX* sys);
			virtual void chMode(EmbeddedSystemX* sys);
			virtual void eventX(EmbeddedSystemX* sys);
			virtual void eventY(EmbeddedSystemX* sys);
		protected:
			ApplicationModeSetting();
			void ChangeState(EmbeddedSystemX*, ApplicationModeSetting*);
			void SetAlgorithm(EmbeddedSystemX*, Application::ContinuousProcessing::Algorithm*);
		};

	}
}