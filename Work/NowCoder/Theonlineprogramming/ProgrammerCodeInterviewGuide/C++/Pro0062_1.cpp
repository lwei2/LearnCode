/*************************************************************************
    > File Name: Pro0062_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <cstdio>
#include <unordered_map>

using namespace std;

class {
	int all;
	std::unordered_map<int, int> covered, unique;
	public:
		void put(int key, int val)
		{
			auto it = covered.find(key);
			if(it != covered.end())
				covered.erase(it);
			unique[key] = val;
		}
		int get(int key)
		{
			auto it = covered.find(key);
			if(it != covered.end())
				return all;
			it = unique.find(key);
			return it == unique.end() ? -1 : it->second;
		}
		void setAll(int num)
		{
			if(unique.size())
			{
				for(auto it : unique)
					covered[it.first] = 0;
				unique.clear();
			}
			all = num;
		}
}s;


int main(void)
{
	int opNum;
	scanf("%d",&opNum);
	for(int op, x,y; opNum > 0; --opNum)
	{
		scanf("%d%d",&op,&x);
		if(op == 1)
		{
			scanf("%d",&y);
			s.put(x,y);
		}
		else if(op == 2)
		{
			printf("%d\n",s.get(x));
		}
		else
		{
			s.setAll(x);
		}
	}
	return 0;
}
