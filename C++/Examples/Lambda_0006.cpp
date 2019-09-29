/*************************************************************************
    > File Name: Lambda_0006.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	vector<int> v;
	for(int i = 1; i < 10; ++i)
		v.push_back(i);
	int eventCount = 0;
	for_each(v.begin(), v.end(),[&eventCount](int n){
		cout<< n;
		if(n % 2 == 0)
			cout<<" is even"<<endl,++eventCount;
		else
			cout<<" is odd"<<endl;
	});
	cout<<"There are "<<eventCount<<" event numbers in the vector."<<endl;
	return 0;
}
