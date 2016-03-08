#pragma once
namespace Application
{
	namespace DiscreteProcessing
	{
		class Command
		{
		public:
			virtual ~Command();
			virtual void execute(class EmbeddedSystemX* sys, class EmbeddedSystemXState* state);
		protected:
			Command();
		};

	}
}