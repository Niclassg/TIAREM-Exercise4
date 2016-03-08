#pragma once
#include "ApplicationModeSetting.h"
#include "EmbeddedSystemX.h"
namespace Application
{
	namespace DiscreteProcessing
	{
		class Mode2 :
			public ApplicationModeSetting
		{
		public:
			static Mode2* Instance();
			~Mode2(void);
			void chMode(EmbeddedSystemX* sys) override;
			void eventX(EmbeddedSystemX* sys) override;
			void eventY(EmbeddedSystemX* sys) override;
			void entry(EmbeddedSystemX* sys) override;
		private:
			static Mode2* _instance;
		protected:
			Mode2(void);
		};

	}
}