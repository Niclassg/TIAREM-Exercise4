#pragma once
#include "ApplicationModeSetting.h"
namespace Application
{
	namespace DiscreteProcessing
	{
		class EmbeddedSystemX;

		class Mode3 :
			public ApplicationModeSetting
		{
		public:
			static Mode3* Instance();
			~Mode3(void);
			void chMode(EmbeddedSystemX* sys) override;
			void eventX(EmbeddedSystemX* sys) override;
			void entry(EmbeddedSystemX* sys) override;
		private:
			static Mode3* _instance;
		protected:
			Mode3(void);
		};

	}
}