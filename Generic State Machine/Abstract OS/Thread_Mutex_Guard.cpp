 
#include "Thread_Mutex_Guard.h"

namespace AbstractOS {

	Thread_Mutex_Guard::Thread_Mutex_Guard(Thread_Mutex &lock)
	{
		lock_ = &lock;
		owner_ = false;
		acquire();
	}

	Thread_Mutex_Guard::~Thread_Mutex_Guard()
	{
		release();
	}

	void Thread_Mutex_Guard::acquire()
	{
		lock_->acquire();
		owner_ = true;
	}

	void Thread_Mutex_Guard::release()
	{
		if(owner_)
		{
			owner_ = false;
			lock_->release();
		}
	}

}