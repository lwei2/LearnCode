/*************************************************************************
    > File Name: Lambda_0001.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include<iostream>
#include<algorithm>

using namespace std;

int main(void)
{
	int a[4] = {
		1,2,3,4
	};
	int total = 0;
	for_each(a,a+4, [&] (int &x){
			total +=x; x*=2;
			});
	cout<<total<<endl;
	for_each(a,a+4,[=](int x){
			cout<<x<<" ";
			});
	return 0;
}
