/*************************************************************************
    > File Name: Pro1006_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <iostream>
#include <cstdio>

using namespace std;

struct Alarm
{
	int Hi;
	int Mi;
};

int main(void)
{
	//input N,Hi,Mi,X,A,B
	//output the time = X + A:B
	int N;
	int X,A,B;
	scanf("%d",&N);


	map<int, int> vAlarm(N);
	if(N < 0 || N > 100)
		return 0;
	for(int i = 1; i <= N; i++)
		scanf("%d%d",&vAlarm[i],&);

	scanf("%d",&X);
	scanf("%d%d",&A,&B);

	int result = 0;
	if((X>= 0 && X<=100)&&(0 <= A && A <= 24) && (0 <= B && B <= 60))
	{
		result = 0;
	}

	return 0;
}
