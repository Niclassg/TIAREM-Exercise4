#pragma once
#include "Thread_Mutex.h"

namespace AbstractOS {
	
	class Thread_Mutex_Guard
	{
	public:
		Thread_Mutex_Guard(Thread_Mutex &lock);
		~Thread_Mutex_Guard();
		void release();
		void acquire();
	private:
		Thread_Mutex *lock_;
		bool owner_;
		// cannot allow assignment or copying
		Thread_Mutex_Guard(const Thread_Mutex_Guard &);
		void operator= (const Thread_Mutex_Guard &);
	};
}