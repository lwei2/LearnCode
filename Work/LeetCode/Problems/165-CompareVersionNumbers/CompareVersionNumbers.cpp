/*************************************************************************
    > File Name: CompareVersionNumbers.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <string>

using namespace std;

class Solution
{
	public:
		int compareVersion(string version1, string version2)
		{
			queue<int> q1;
			queue<int> q2;
			string version;

			istringstream iss1(version1);
			while(getline(iss1, version,'.'))
				q1.push(stoi(version));
			istringstream iss2(version2);
			while(getline(iss2, version,'.'))
				q2.push(stoi(version));

			while(!q1.empty() && !q2.empty())
			{
				if(q1.front() > q2.front())
					return 1;
				else if(q1.front() < q2.front())
					return -1;
				q1.pop();
				q2.pop();
			}
			while(!q1.empty() && q1.front() == 0)
				q1.pop();
			while(!q2.empty() && q2.front() == 0)
				q2.pop();

			if(!q1.empty())
				return 1;
			if(!q2.empty())
				return -1;
			return 0;
		}
};
int main(void)
{
	return 0;
}
