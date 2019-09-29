/*************************************************************************
    > File Name: Lambda_0009.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

int main(void)
{
	int timestwoplusthree = [](int x){
		return [](int y){
			return y*2;
		}(x)+3;
	}(5);
	cout<<timestwoplusthree<<endl;

	return 0;
}
