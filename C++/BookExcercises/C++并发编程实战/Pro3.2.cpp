/*************************************************************************
    > File Name: Pro3.2.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <mutex>
#include <string>

using namespace std;

class some_data
{
	int a;
	std::string b;
	public:
	void do_something()
	{

	}
};

class data_wrapper
{
	private:
		some_data data;
		std::mutex m;
	public:
		template<typename Function> void process_data(Function func)
		{
			std::lock_guard<std::mutex> l(m);
			func(data);
		}
};

some_data *unprotected;

void malicious_function(some_data &protected_data)
{
	unprotected = &protected_data;
}

data_wrapper x;

void foo()
{
	x.process_data(malicious_function);
	unprotected->do_something();
}

int main(void)
{
	foo();
	return 0;
}
