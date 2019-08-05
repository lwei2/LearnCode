/*************************************************************************
    > File Name: Pro1007.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

int main(void)
{
	int a,b,c;
	while(cin>>a>>b>>c)
	{
		if((-10000 <= a && a <= 10000) && (-10000 <= b && b <= 10000) && (-10000 <= c && c <= 10000))
			cout<<(a+b)*2<<endl;
	}
	return 0;
}
