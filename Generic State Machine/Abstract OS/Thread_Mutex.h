#pragma once
#include <windows.h>
#include <stdio.h>

namespace AbstractOS {
	
	class Thread_Mutex
	{
	public:
		Thread_Mutex();
		~Thread_Mutex();
		void acquire();
		void release();
	private:
		HANDLE handle;
		// cannot allow assignment or copying
		Thread_Mutex(const Thread_Mutex &);
		void operator=(const Thread_Mutex &);
	};
}