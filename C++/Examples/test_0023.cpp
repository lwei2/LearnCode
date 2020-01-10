/*************************************************************************
    > File Name: test_0023.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

int main(void)
{
	char op;
	float num1, num2;
	cin>>op;
	cin>>num1>>num2;
	switch(op)
	{
		case '+':
			cout<<num1+num2;
			break;
		case '-':
			cout<<num1-num2;
			break;
		case '*':
			cout<<num1*num2;
			break;
		case '/':
			cout<<num1/num2;
			break;
		default:
			cout<<"Error!";
			break;
	}
	return 0;
}
