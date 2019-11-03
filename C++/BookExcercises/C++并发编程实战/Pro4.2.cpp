/*************************************************************************
    > File Name: Pro4.2.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

template <class T, class Container = std::deque<T> >
class queue
{
	public:
		explicit queue(const Container&);
		explicit queue(Container &&= Container());
		queue(queue &&q);

		template <class Alloc> explicit queue(const Alloc&);
		template <class Alloc> queue(const Container&, const Alloc&);
		template <class Alloc> queue(Container &&, const Alloc&);
		template <class Alloc> queue(queue&&, const Alloc&);

		queue& operator=(queue&& q);
		void swap(queue&& q);

		bool empty()const;
		size_type size() const;

		T &front();
		const T& front() const;
		T &back();
		const T& back() const;

		void push(const T& x);
		void push(T&& x);
		void pop();

};


int main(void)
{
	return 0;
}
