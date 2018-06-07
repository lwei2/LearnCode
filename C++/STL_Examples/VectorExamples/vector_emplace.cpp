/*************************************************************************
    > File Name: vector_emplace.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include<iostream>
#include<vector>

using namespace std;

int main(void)
{
  	vector<int> myvector = {10,20,30};
	vector<int>::iterator it;
	it = myvector.emplace(myvector.begin()+1,100);
	myvector.emplace(it,200);
	myvector.emplace(myvector.end(),300);
	cout<<"myvector contains:";
	vector<int>::iterator iter;
	for(iter=myvector.begin();iter!=myvector.end();++iter)
	  cout<<*iter<<endl;

	return 0;
}
