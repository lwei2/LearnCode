/*************************************************************************
    > File Name: Pro3.4.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <exception>
#include <memory>

using namespace std;

struct empty_stack: std::exception
{
	const char *what() const throw();
}

template<typename T> class threadsaft_stack
{
	public:
		threadsaft_stack();
		threadsaft_stack(cosnt threadsaft_stack);
		threadsaft_stack& operator=(const threadsaft_stack&) = delete;
		
		void push(T new_value);
		std::shared_ptr <T> pop();
		void pop(T& value);
		bool empty()const ;
};

int main(void)
{
	return 0;
}
