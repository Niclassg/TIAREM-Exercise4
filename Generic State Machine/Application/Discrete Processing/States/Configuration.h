#pragma once
#include "operational.h"
namespace Application
{
	namespace DiscreteProcessing
	{
		class Configuration :
			public Operational
		{
		public:
			static Configuration* Instance();
			~Configuration(void);
			void ConfigurationEnded(EmbeddedSystemX* sys) override;
			void ConfigX(EmbeddedSystemX* sys) override;
			void entry(EmbeddedSystemX* sys) override;
		private:
			static Configuration* _instance;
		protected:
			Configuration(void);
		};

	}
}