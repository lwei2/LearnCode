/*************************************************************************
    > File Name: Pro1062_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <vector>
#include <iomanip>
#include <map>
#include <unordered_map>
#include <sstream>
#include <climits>
#include <algorithm>
#include <set>
#include <string>

using namespace std;

int main(void)
{
	string input, tmp;
	while(cin>>input)
	{
		vector<int> array;
		input.erase(input.begin());
		input.erase(input.end() - 1);
		stringstream stringstream1(input);
		while(getline(stringstream1, tmp,','))
		{
			int v = stoi(tmp);
			array.push_back(v);
		}
		int index = 0;
		bool flag = true;
		while(true)
		{
			if(index >= 0 && index < array.size())
			{
				if(array[index] == 0)
				{
					flag = false;
					break;
				}
				int temp = array[index];
				array[index] = 0;
				index = index + temp;
			}
			else
			{
				flag = true;
				break;
			}
		}
		if(flag)
			cout<<"true"<<endl;
		else
			cout<<"false"<<endl;
	}
	return 0;
}
