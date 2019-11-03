/*************************************************************************
    > File Name: Pro4.3.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <memory>

using namespace std;

template <typename T>

class threadsafe_queue
{
	public:
		threadsafe_queue();
		threadsafe_queue(const threadsafe_queue&);
		threadsafe_queue &operator=(const threadsafe_queue&) = delete;

		void push(T new_value);
		bool try_pop(T &value);
		std::shared_ptr<T> try_pop();

		void wait_and_pop(T& value);
		std::shared_ptr<T> wait_and_pop();

		bool empty() const;
}

int main(void)
{
	return 0;
}
