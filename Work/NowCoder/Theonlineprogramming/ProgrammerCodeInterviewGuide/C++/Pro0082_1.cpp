/*************************************************************************
    > File Name: Pro0082_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
	int k;
	int aLength = 0, bLength = 0;
	cin>>aLength>>bLength>>k;
	vector<int> arrayA(aLength);
	vector<int> arrayB(bLength);
	for(int i = 0; i < aLength; i++)
		cin>>arrayA[i];
	for(int i = 0; i < bLength; i++)
		cin>>arrayB[i];
	
	int indexA = 0, indexB = 0;
	while(1)
	{
		if((arrayA[indexA] < arrayB[indexB] || indexB >= bLength) && indexA < aLength)
		{
			if(indexA + indexB == k - 1)
			{
				cout<<arrayA[indexA];
				break;
			}
			else
				indexA++;
		}
		else
		{
			if(indexA + indexB == k - 1)
			{
				cout<<arrayB[indexB];
				break;
			}
			else
				indexB++;
		}
	}
	return 0;
}
