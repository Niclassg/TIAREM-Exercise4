#pragma once
#include "operational.h"
namespace Application
{
	namespace DiscreteProcessing
	{
		class Ready :
			public Operational
		{
		public:
			static Ready* Instance();
			~Ready(void);
			void Configure(EmbeddedSystemX* sys) override;
			void Start(EmbeddedSystemX* sys) override;
			void entry(EmbeddedSystemX* sys) override;
		private:
			static Ready* _instance;
		protected:
			Ready(void);
		};

	}
}