/*************************************************************************
    > File Name: 11-24.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;

template<class Operation, class Param>
class my_binder1st
{
	public:
		my_binder1st(Operation op, Param first)
		{
			m_op = op;
			m_first = first;
		}
		Param operator()(Param second)
		{
			return m_op(m_first, second);
		}
	private:
		Operation m_op;
		Param m_first;
};

template<class Operation, class Param>
my_binder1st<Operation, Param>
my_bind1st(Operation op, Param first)
{
	return my_binder1st<Operation, Param>(op, first);
}

int main(void)
{
	my_binder1st<plus<int>,int> plusObj = my_bind1st(plus<int>(), 10);
	my_binder1st<minus<int>,int> minusObj = my_bind1st(minus<int>(), 10);
	cout<<plusObj(20)<<endl;
	cout<<minusObj(20)<<endl;
	return 0;
}
