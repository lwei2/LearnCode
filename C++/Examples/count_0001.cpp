/*************************************************************************
    > File Name: count_0001.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void)
{
	int nval;
	int value;
	vector<int> vec;

	for(int i = 0; i < 5; i++)
		if(i <= 2)
			vec.push_back(10);
		else
			vec.push_back(i*10);

	for(int i = 0; i < 5; i++)
		cout<<vec[i]<<'\t';
	cout<<endl;
	cout<<"Enter the number you want to search:"<<endl;
	cin>>value;

	cout<<"the vector has the value :"<<count(vec.begin(), vec.end(), value)<<"elements "<<endl;
	return 0;
}

