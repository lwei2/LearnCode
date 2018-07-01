/*************************************************************************
    > File Name: vector_cend.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include<iostream>
#include<vector>

using namespace std;

int main(void)
{
	vector<int> myvector = {10,20,30,40,50};
	cout<<"myvector contains:";
	vector<int>::const_iterator iter;
	for(iter = myvector.cbegin();iter!=myvector.cend();++iter)
	  	cout<<' '<<*iter;
	cout<<endl;
	return 0;

}
