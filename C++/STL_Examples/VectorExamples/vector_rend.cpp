/*************************************************************************
    > File Name: vector_rend.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include<iostream>
#include<vector>

using namespace std;

int main(void)
{
  	vector<int> myvector(5);
	vector<int>::reverse_iterator it = myvector.rbegin();
	int i =0;
	for(;it!=myvector.rend();++it)
	  *it = ++i;
	for(vector<int>::iterator iter = myvector.begin(); iter!=myvector.end();++iter)
	  cout<<' '<<*iter;
	cout<<endl;

	return 0;
}
