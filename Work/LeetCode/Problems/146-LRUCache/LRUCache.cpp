/*************************************************************************
    > File Name: LRUCache.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <list>
#include <unordered_map>
using namespace std;

class LRUCache
{
	typedef list<pair<int,int>> List;
	List mList;
	unordered_map<int,<List::iterator> mHashMap;
	int mCapacity;
	public:
		LRUCache(int capacity):mCapacity(capacity)
		{
			mHashMap.reserve(capacity);
		}
		int get(int key)
		{
			if(mHashMap.count(key) == 0)
				return -1;
			List::iterator it = mHashMap[key];
			int val = it->second;
			if(it!=mList.begin())
			{
				mList.erase(it);
				mList.push_front(make_pair(key, val));
				mHashMap[key] = mList.begin();
			}
			return val;
		}
		void put(int key, int value)
		{
			if(mHashMap.count(key)!=0)
				mList.erase(mHashMap[key]);
			else if(mList.size() >= mCapacity)
			{
				mHashMap.erase(mList.back().frist);
				mList.pop_back();
			}
			mList.push_front(make_pair(key, value));
			mHashMap[key] = mList.begin();

		}
};

int main(void)
{
	return 0;
}
