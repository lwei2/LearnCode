/*************************************************************************
    > File Name: Pro1069_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void)
{
	int n;
	cin>>n;
	for(int i = 0; i < n; i++)
	{
		int width, height;
		cin>>width>>height;
		vector<string> maze(width);
		for(int j = 0; j < width; j++)
		{
			string tmp;
			cin>>tmp;
			maze[j] = tmp;
		}
		
		string key;
		int count = 0;
		cin>>key;
		for(int n = 0; n < width; n++)
		{
			for(int m = 0; m < height; m++)
			{
				if(maze[n][m] == key[0])
				{
					for(int t = 1; t < key.size(); t++)
					{
						if(m + t >= height)
							break;
						if(maze[n][m+t] != key[t])
							break;
						if(t == key.size() - 1)
							count++;
					}
					for(int t = 1; t < key.size(); t++)
					{
						if(n + t >= width)
							break;
						if(maze[n + t][m] != key[t])
							break;
						if(t == key.size() - 1)
							count++;
					}
					for(int t = 1; t < key.size(); t++)
					{
						if(n + t >= width || m + t >= height)
							break;
						if(maze[n + t][m + t] != key[t])
							break;
						if(t == key.size() - 1)
							count++;
					}
				}
			}
		}
		cout<<count<<endl;
	}
	return 0;
}
