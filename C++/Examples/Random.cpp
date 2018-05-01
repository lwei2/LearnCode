/*************************************************************************
    > File Name: Random.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
#include<deque>
#include<algorithm>

using namespace std;

void print(int elem)
{
	cout<< elem << ' ';
}
int main(void)
{
	vector<int> col1;
	for(int i = 0; i < 9; ++i)
	{
		col1.push_back(i);
	}
	cout<<"the source elements in the vector"<<endl;
	for_each(col1.begin(),col1.end(),print);
	cout<<endl<<endl;
	vector<int>::iterator pos;
	cout<<"iterator output:"<<endl;
	for(pos = col1.begin(); pos!=col1.end(); ++pos)
	{
		cout<<*pos<<' ';
	}
	cout<<endl<<endl;
	cout<<"the reference output"<<endl;
	for(int i=0;i<9;++i)
	  cout<<col1.begin()[i]<<' ';
	cout<<endl<<endl;
	return 0;
}
