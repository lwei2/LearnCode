/*************************************************************************
    > File Name: vector_insert.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
  	vector<int> myvector(3,100);
	vector<int>::iterator iter;

	iter = myvector.begin();
	iter = myvector.insert(iter,200);

	myvector.insert(iter,2,300);

	iter = myvector.begin();
	vector<int> myvector1(2,400);
	myvector.insert(iter+2,myvector1.begin(),myvector1.end());
	int myarray[] = { 501,502,503};
	myvector.insert(myvector.begin(),myarray,myarray+3);

	for(iter = myvector.begin();iter<myvector.end();++iter)
	  cout<<' '<<*iter;
	cout<<endl;

	return 0;
}
