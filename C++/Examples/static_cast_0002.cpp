/*************************************************************************
    > File Name: static_cast_0002.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

int main(void)
{
	char c;
	int i = 0;
	do{
		c = cin.get();
		cout<<++i<<" : "<<
			static_cast<int>(c)<<endl;
	}while(c!='q');
	return 0;
}
