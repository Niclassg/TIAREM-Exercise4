#pragma once
#include "operational.h"
namespace Application
{
	namespace DiscreteProcessing
	{
		class Suspended :
			public Operational
		{
		public:
			static Suspended* Instance();
			~Suspended(void);
			void Resume(EmbeddedSystemX* sys) override;
			void Stop(EmbeddedSystemX* sys) override;
			void entry(EmbeddedSystemX* sys) override;
		private:
			static Suspended* _instance;
		protected:
			Suspended(void);
		};

	}
}