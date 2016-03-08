 
#include "Configuration.h"
#include "Ready.h"
namespace Application
{
	namespace DiscreteProcessing
	{
		Configuration* Configuration::_instance = 0;

		Configuration* Configuration::Instance(void)
		{
			if (_instance == 0)
			{
				_instance = new Configuration;
			}
			return _instance;
		}

		Configuration::Configuration(void)
		{
		}


		Configuration::~Configuration(void)
		{
		}


		void Configuration::ConfigurationEnded(EmbeddedSystemX* sys)
		{
			ChangeState(sys, Ready::Instance());
		}


		void Configuration::ConfigX(EmbeddedSystemX* sys)
		{
			sys->PerformConfigurationX();
		}


		void Configuration::entry(EmbeddedSystemX* sys)
		{
			sys->print("Configuration state entered.");
			sys->readConfigurationInfo();
		}
	}
}