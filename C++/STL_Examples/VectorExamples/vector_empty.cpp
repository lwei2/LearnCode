/*************************************************************************
    > File Name: vector_empty.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include<iostream>
#include<vector>

using namespace std;

int main(void)
{
  	vector<int> myvector;
	if(myvector.empty())
	  cout<<"myvector size is 0"<<endl;

	for(int i = 0; i <= 10; ++i)
	  myvector.push_back(i);
	int sum = 0;
	if(!myvector.empty())
  		sum+=1;	  
	cout<<"total:"<<sum<<endl;

	return 0;
}
