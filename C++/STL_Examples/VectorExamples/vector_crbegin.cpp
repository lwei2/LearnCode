/*************************************************************************
    > File Name: vector_crbegin.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include<iostream>
#include<vector>

using namespace std;

int main(void)
{
  	vector<int> myvector = {1,2,3,4,5};
	cout<<"myvector backwards:";
	vector<int>::const_reverse_iterator iter;
	for(iter = myvector.crbegin();iter!=myvector.crend();iter++)
	  	cout<<' '<<*iter;
	cout<<endl;

	return 0;
}
