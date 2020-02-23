/*************************************************************************
    > File Name: test_0033.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <functional>

using namespace std;

int add(int x, int y)
{
	return x + y;
}
class Add
{
	public:
		int operator()(int x, int y)
		{
			return x + y;
		}
};



int main(void)
{
	function<int(int,int)> f1 = add;
	function<int(int,int)> f2 = Add();
	function<int(int,int)> f3 = [](int x, int y){
		return x + y;
	};
	cout<<f1(10,20)<<","<<f2(30,40)<<","<<f3(50,60)<<endl;

	return 0;
}
