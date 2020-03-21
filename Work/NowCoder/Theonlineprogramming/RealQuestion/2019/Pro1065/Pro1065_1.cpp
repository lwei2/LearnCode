/*************************************************************************
    > File Name: Pro1065_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

int main(void)
{
	int memberCount, carCount;
	cin>>memberCount;
	cin>>carCount;
	int *members = new int[memberCount];
	for(int i = 0; i < memberCount; i++)
		cin>>members[i];

	int count = 0;
	int *orders = new int[memberCount];
	int gNumber = memberCount/carCount;

	if(memberCount%carCount != 0)
	{
		for(int j = carCount*gNumber; j < memberCount; j++)
		{
			orders[count] = members[j];
			count++;
		}
	}
	for(int i = gNumber - 1; i >= 0; i--)
	{
		for(int j = carCount*i; j < carCount*i + carCount; j++)
		{
			orders[count] = members[j];
			count++;
		}
	}
	for(int i = 0; i < memberCount; i++)
		cout<<orders[i]<<' ';
	delete[] members;
	delete[] orders;
	return 0;
}
