/*************************************************************************
    > File Name: TheRandomNumber_0001.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> OperateInput(int sizeOfArray, vector<int> &arr)
{
	for(int i = 0; i < sizeOfArray; i++)
	{
		int cmpWait = arr[i];
		for(int j = i + 1; j < sizeOfArray; j++)
		{
			if(cmpWait == arr[j])
				arr[j] = -1;
		}
	}
	vector<int> res;
	for(int i = 0; i < sizeOfArray; i++)
		if(arr[i] != -1)
			res.push_back(arr[i]);
	sort(res.begin(), res.end());
	return res;
}

int main(void)
{
	int input1;
	while(cin>>input1)
	{
		vector<int> input2;
		int tmp;
		for(int i = 0; i < input1; i++)
		{
			cin>>tmp;
			input2.push_back(tmp);
		}
		vector<int> result = OperateInput(input1, input2);
		for(int i = 0; i < result.size(); i++)
			cout<<result[i]<<endl;
	}
	return 0;
}
