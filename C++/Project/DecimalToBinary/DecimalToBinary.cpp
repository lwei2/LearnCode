/*************************************************************************
    > File Name: DecimalToBinary.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include<iostream>
#include<list>
using namespace std;

int main(void)
{
  	int num;
  	list<int> binary;
	list<int>::iterator iter;
	cout<<"input the decimal nums:"<<endl;
	cin>>num;
	while(num>=2)
	{
		binary.push_front(num%2);
		num/=2;
	}
	binary.push_front(num%2);
	for(iter = binary.begin(); iter!=binary.end();++iter)
	  cout<<*iter;
	cout<<endl;

	return 0;
}
