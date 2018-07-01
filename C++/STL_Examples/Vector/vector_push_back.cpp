/*************************************************************************
    > File Name: vector_push_back.cpp
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
	int myint;
	cout<<"Please enter some integers:"<<endl;
	do{
		cin>>myint;
		myvector.push_back(myint);
	}while(myint);
	cout<<"myvector stores"<<int(myvector.size())<<"numbers"<<endl;

	return 0;
}
