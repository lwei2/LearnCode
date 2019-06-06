/*************************************************************************
    > File Name: Pro1008_C++.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include<iostream>
#include<vector>

using namespace std;


int main(void)
{
	int N;
	int num;
	int times = 0;
	while(cin>>N)
	{
		if(0 == N)
		{
			break;
		}
		int step[N] = {0};
		for(int i = 0; i < N; i++)
		{
			cin>>num;
			cout<<"N:"<<N<<","<<"num:"<<num<<endl;
			step[i] = num;								
		}
		for(int i = 0; i < N; i++)
			if(i == 0)
				times = times + step[i] * 6 + 5;
			else if(step[i] > step[i+1])
				times = times + (step[i] - step[i+1]) * 6 + 5;
			else if(step[i] < step[i+1])
				times = times + (step[i+1] - step[i]) * 5 + 5;
		N = N - 1;
	//	cout<<"N:"<<N<<endl;
	//	cout<<"while in"<<endl;	
	}
	cout<<"while after"<<endl;
	cout<<times<<endl;
	return 0;
}
