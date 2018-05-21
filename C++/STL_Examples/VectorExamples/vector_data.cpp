/*************************************************************************
    > File Name: vector_data.cpp
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
	int *p = myvector.data();
	*p = 10;
	++p;
	*p = 20;

	p[2] = 100;
	cout<<"vector contains:";
	for(int i = 0; i< myvector.size(); ++i)
	  cout<<' '<<myvector[i];
	cout<<endl;

	return 0;
}
