 
#include "DiscreteProcessingThread.h"
#include <iostream>
#include "EmbeddedSystemX.h"
#include "chMode.h"
#include "ConfigurationEnded.h"
#include "Configure.h"
#include "ConfigX.h"
#include "eventX.h"
#include "eventY.h"
#include "Exit.h"
#include "Initialized.h"
#include "Restart.h"
#include "Resume.h"
#include "SelfTestFailed.h"
#include "SelfTestOk.h"
#include "Start.h"
#include "Stop.h"
#include "Suspend.h"
#include "Simulate.h"
#include "RunRealTime.h"

namespace Application{
	namespace DiscreteProcessing {

		DiscreteProcessingThread::DiscreteProcessingThread()
		{
		}


		DiscreteProcessingThread::~DiscreteProcessingThread()
		{
		}


		void DiscreteProcessingThread::run()
		{
			using namespace std;

			cout << "Type the number to execute the command:" << endl;
			cout << "1  - SelfTestOk" << endl;
			cout << "2  - SelfTestFailed" << endl;
			cout << "3  - Initialized" << endl;
			cout << "4  - Restart" << endl;
			cout << "5  - Exit" << endl;
			cout << "6  - Start" << endl;
			cout << "7  - Stop" << endl;
			cout << "8  - Configure" << endl;
			cout << "9  - ConfigurationEnded" << endl;
			cout << "10 - Suspend" << endl;
			cout << "11 - Resume" << endl;
			cout << "12 - chMode" << endl;
			cout << "13 - ConfigX" << endl;
			cout << "14 - eventX" << endl;
			cout << "15 - eventY" << endl;
			cout << "16 - Simulate" << endl;
			cout << "17 - RunRealTime" << endl;

			EmbeddedSystemX sys = EmbeddedSystemX();

			while (1)
			{
				//Read inputs
				int i;
				cin >> i;

				switch (i)
				{
				case 1:
					sys.handleCommand(new SelfTestOk());
					break;
				case 2:
					cout << "Input the error: ";
					cin >> i;
					sys.handleCommand(new SelfTestFailed(i));
					break;
				case 3:
					sys.handleCommand(new Initialized());
					break;
				case 4:
					sys.handleCommand(new Restart());
					break;
				case 5:
					sys.handleCommand(new Exit());
					break;
				case 6:
					sys.handleCommand(new Start());
					break;
				case 7:
					sys.handleCommand(new Stop());
					break;
				case 8:
					sys.handleCommand(new Configure());
					break;
				case 9:
					sys.handleCommand(new ConfigurationEnded());
					break;
				case 10:
					sys.handleCommand(new Suspend());
					break;
				case 11:
					sys.handleCommand(new Resume());
					break;
				case 12:
					sys.handleCommand(new chMode());
					break;
				case 13:
					sys.handleCommand(new ConfigX());
					break;
				case 14:
					sys.handleCommand(new eventX());
					break;
				case 15:
					sys.handleCommand(new eventY());
					break;
				case 16:
					sys.handleCommand(new Simulate());
					break;
				case 17:
					sys.handleCommand(new RunRealTime());
					break;
				default:
					cout << "Input: " << i << " is not defined." << endl;
					break;
				}
			}
		}
	}
}