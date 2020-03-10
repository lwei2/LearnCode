/*************************************************************************
    > File Name: template_0002.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

template <class T>
class A
{
	public:
		template<class T2>
			void Func(T2 t)
			{
				cout<<t;
			}
};

int main(void)
{
	A<int> a;
	a.Func('K');
	a.Func("hello");
	return 0;
}
