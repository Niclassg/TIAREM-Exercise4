 
#include "Thread_Mutex.h"

namespace AbstractOS {
	
	Thread_Mutex::Thread_Mutex()
	{
		handle = CreateMutex(NULL,FALSE,NULL);

		if (handle == NULL) 
	    {
	        printf("CreateMutex error: %d\n", GetLastError());
	    }
	}

	Thread_Mutex::~Thread_Mutex()
	{
		CloseHandle(handle);
	}

	void Thread_Mutex::acquire()
	{
		WaitForSingleObject( 
            handle,    // handle to mutex
            INFINITE);  // no time-out interval
	}

	void Thread_Mutex::release()
	{
		ReleaseMutex(handle);
	}
}