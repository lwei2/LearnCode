/*************************************************************************
    > File Name: Pro3.3.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <mutex>
#include <thread>
#include <queue>

using namespace std;

template<typename T, typename Container=std::deque<T> >
class stack
{
	public:
		explicit stack(const Container&);
		explicit stack(Container &&= Container());
		template<class Alloc> explicit stack(const Alloc&);
		template<class Alloc> stack(const Container &, const Alloc&);
		template<class Alloc> stack(Container &&, const Alloc&);
		template<class Alloc> stack(stack&&, const Alloc&);
		bool empty() const;
		size_t size() const;
		T &top();
		T const &top() const;
		void push(T const &);
		void push(T&&);
		void pop();
		void swap(stack&&);
};


int main(void)
{
	return 0;
}
