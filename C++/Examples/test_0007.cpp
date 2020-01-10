/*************************************************************************
    > File Name: test_0007.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

int main(void)
{
	cout<<"Hello World!"<<endl;
	
	int number;
	cout<<"Enter an number:";
	cin>>number;
	cout<<"number:"<<number;
	
	int firstNumber,secondNumber,sumOfTwoNumber;
	cout<<"Enter two number:";
	cin>>firstNumber>>secondNumber;
	sumOfTwoNumber = firstNumber + secondNumber;
	cout<<firstNumber<<"+"<<secondNumber<<"="<<sumOfTwoNumber;

	int divisor, dividend, quotient, remainder;
	cout<<"dividend:";
	cin>>dividend;
	cout<<"divisor:";
	cin>>divisor;
	quotient = dividend/divisor;
	remainder = dividend % divisor;
	cout<<"quotient="<<quotient<<endl;
	cout<<"remainder="<<remainder<<endl;

	cout<<"char size:"<<sizeof(char)<<endl;
	cout<<"int size:"<<sizeof(int)<<endl;
	cout<<"float size:"<<sizeof(float)<<endl;
	cout<<"double size:"<<sizeof(double)<<endl;

	int a = 5, b = 10, tmp;
	cout<<"before change:"<<endl;
	cout<<"a="<<a<<",b="<<b<<endl;
	tmp = a;
	a = b;
	b = tmp;
	cout<<"after change:"<<endl;
	cout<<"a="<<a<<",b="<<b<<endl;


	int a1 = 5, b1 = 10;
	cout<<"before change:"<<endl;
	cout<<"a1="<<a<<",b2="<<b<<endl;
	a1 = a1 + b1;
	b1 = a1 - b1;
	a1 = a1 - b1;
	cout<<"after change:"<<endl;
	cout<<"a1="<<a<<",b2="<<b<<endl;

	int N;
	cout<<"Enter N:";
	cin>>N;
	if(N%2 == 0)
		cout<<N<<" is double number!"<<endl;
	else
		cout<<N<<" is not double number!"<<endl;

	int N1;
	cout<<"Enter N1:";
	cin>>N1;

	(N1%2 == 0)?cout<<N1<<" is double number":cout<<N1<<" is not double number!";

	int N2;
	cin>>N2;
	if((N2 % 1) == 0)
		cout<<N<<" is double number!"<<endl;
	else
		cout<<N<<" is not double number!"<<endl;

	char c;
	int isLowercaseVowel, isUppercaseVowel;
	cout<<"Enter a char:";
	cin>>c;
	isLowercaseVowel = ( c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
	isUppercaseVowel = ( c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
	if(isLowercaseVowel || isUppercaseVowel)
		cout<<c<<" is Y";
	else
		cout<<c<<" is N";

	float n1, n2, n3;
	cout<<"Enter n1, n2, n3:";
	if(n1 >= n2 && n1 >= n3)
		cout<<n1<<endl;
	if(n2 >= n1 && n2 >= n3)
		cout<<n2<<endl;
	if(n3 >= n1 && n3 >= n2)
		cout<<n3<<endl;

	return 0;
}
