/*************************************************************************
    > File Name: Pro1038.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

int main(void)
{
	float p = 3.1415927;
	float diameter;
	float temp;
	int revolutions;
	int mark = 1;
	float time;
	float result[2];
	cin>>diameter>>revolutions>>time;
	while(revolutions)
	{
		temp = p * diameter *((float)revolutions);
		result[0] = (temp/12.0)/5280;
		result[0] = ((int)(result[0]*100.0+0.5))/100.00;
		result[1] = (temp*3600.0/time)/63360;
		result[1] = ((int)(result[1]*100.0+0.5))/100.00;
		cout<<"Trip #"<<mark++<<": ";
		printf("%.2f %.2f\n",result[0],result[1]);
		cin>>diameter>>revolutions>>time;
	}
	return 0;
}
