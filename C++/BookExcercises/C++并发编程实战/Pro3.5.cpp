/*************************************************************************
    > File Name: Pro3.5.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <mutex>
#include <stack>
#include <exception>
#include <memory>


using namespace std;

struct empty_stack: std::exception
{
	const char *what() const throw()
	{
		return "empty stack";
	}
};

template<typename T>
class threadsafe_stack
{
	private:
		std::stack<T>  data;
		mutable std::mutex m;
	public:
		threadsafe_stack():data(std::stack<int>())
		{

		}
		threadsafe_stack(const threadsafe_stack &other)
		{
			std::lock_guard<std::mutex> lock(other.m);
			data = other.data;
		}
		threadsafe_stack &operator=(const threadsafe_stack&)=delete;
		void push(T new_value)
		{
			std::lock_guard<std::mutex> lock(m);
			data.push(new_value);
		}
		std::shared_ptr<T> pop()
		{
			std::lock_guard<std::mutex> lock(m);
			if(data.empty())
				throw empty_stack();
			std::shared_ptr<T> const res(std::make_shared<T>(data.top()));
			data.pop();
			return res;
		}
		void pop(T &value)
		{
			std::lock_guard<std::mutex> lock(m);
			if(data.empty())
				throw empty_stack();
			value = data.top();
			data.pop();
		}
		bool empty() const
		{
			std::lock_guard<std::mutex> lock(m);
			return data.empty();
		}
};



int main(void)
{
	threadsafe_stack<int> si;
	si.push(5);
	si.pop();
	if(!si.empty())
	{
		int x;
		si.pop(x);
	}
	return 0;
}
