/*************************************************************************
    > File Name: Pro7.1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <atomic>
using namespace std;

class spinlock_mutex
{
	std::atomic_flag flag;
	public:
		spinlock_mutex():flag(ATOMIC_FLAG_INIT)
		{

		}
		void lock()
		{
			while(flag.test_and_set(std::memory_order_acquire));
		}
		void unlock()
		{
			flag.clear(std::memory_order_release);
		}
};

int main(void)
{
	return 0;
}
