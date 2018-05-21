/*************************************************************************
    > File Name: vector_end.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include<iostream>
#include<vector>

using namespace std;

int main(void)
{
  	vector<int> vect1;
	for(int i = 1; i <= 5; i++)
	  vect1.push_back(i);
	vector<int>::iterator iter;
	for(iter=vect1.begin();iter!=vect1.end();++iter)
	  	cout<<*iter;
	cout<<endl;

	return 0;
}
