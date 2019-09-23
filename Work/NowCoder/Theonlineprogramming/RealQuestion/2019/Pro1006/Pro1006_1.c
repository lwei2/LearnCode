/*************************************************************************
    > File Name: Pro1006_1.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <stdio.h>

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
	int Hi,Mi;
	int X,A,B;
	scanf("%d",&N);
	struct Alarm vAlarm[N];

	if(N < 0 || N > 100)
		return 0;
	for(int i = 0; i < N; i++)
		scanf("%d%d",&vAlarm[i].Hi,&vAlarm[i].Mi);

	scanf("%d",&X);
	scanf("%d%d",&A,&B);

	
	double result = 0;
	if((X>= 0 && X<=100)&&(0 <= A && A <= 24) && (0 <= B && B <= 60))
	{
		result = A+(B*1.0)/60;
		//(X*1.0)/60
		for(int i = 0; i < N; i++)
		{
			if(vAlarm[i].Hi + (vAlarm[i].Mi*1.0)/60 + (X*1.0)/60 > result)
		}
	}

	return 0;
}
