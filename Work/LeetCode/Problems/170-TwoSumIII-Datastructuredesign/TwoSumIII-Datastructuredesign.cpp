/*************************************************************************
    > File Name: TwoSumIII-Datastructuredesign.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

class TwoSum
{
	private:
		map<int, int> mMap;
	public:
		void add(int x)
		{
			if(!mMap.count(x))
				mMap[x] = 1;
			else
				mMap[x]++;
		}
		bool find(int target)
		{
			for(map<int, int>::iterator iter = mMap.begin(); iter != mMap.end(); ++iter)
			{
				int one = iter->first;
				if(mMap.count(target - one))
				{
					if(one != target - one)
						return true;
					else
						if(mMap[i] >= 2)
							return true;
				}
			}
			return false;
		}
};
int main(void)
{
	return 0;
}
