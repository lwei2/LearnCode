/*************************************************************************
    > File Name: Pro1017_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <map>
#include <deque>
#include <sstream>

using namespace std;


void SumTree(vector<int> Pre, vector<int> Mid, vector<int> &Result)
{
	if(Pre.size() == 1)
	{
		Result.push_back(0);
		return;
	}
	if(Pre.empty())
		return;
	
	int Pos = 0;
	while(Mid[Pos] != Pre[0])
		Pos++;
	vector<int> Pre1(Pre.begin() + 1, Pre.begin() + 1 + Pos);
	vector<int> Mid1(Mid.begin(), Mid.begin() + Pos);

	SumTree(Pre1, Mid1, Result);
	Result.push_back(accumulate(Mid.begin(), Mid.end(), -Mid[Pos]));
	vector<int> Pre2(Pre.begin() + 1 + Pos, Pre.end());
	vector<int> Mid2(Mid.begin() + 1 + Pos, Mid.end());
	SumTree(Pre2, Mid2, Result);
}

int main(void)
{
	int tmp;
	string str;
	vector<int> Pre, Mid, Result;

	getline(cin,str);
	istringstream ISS(str);
	while(ISS >> tmp)
		Pre.push_back(tmp);
	getline(cin,str);
	ISS.clear();
	ISS.str(str);
	while(ISS>>tmp)
		Mid.push_back(tmp);
	SumTree(Pre, Mid, Result);
	for(int i = 0; i < Result.size(); i++)
		cout<<Result[i]<<" ";

	return 0;
}
