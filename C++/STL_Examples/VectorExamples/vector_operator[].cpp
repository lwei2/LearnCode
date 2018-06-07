/*************************************************************************
    > File Name: vector_operator[].cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include<iostream>
#include<vector>

using namespace std;

int main(void)
{
  	vector<int> myvector(10);
	vector<int>::size_type sz =myvector.size();
	for(unsigned int i = 0; i < sz; i++)
	  myvector[i] = i;
	for(unsigned int i = 0; i < sz/2 ; i++)
	{
		int temp;
		temp = myvector[sz-1-i];
		myvector[sz-1-i] = myvector[i];
		myvector[i] = temp;
	}
	for(unsigned int i = 0; i < sz; i++)
	  cout<<' '<<myvector[i];
	cout<<endl;

	return 0;
}
