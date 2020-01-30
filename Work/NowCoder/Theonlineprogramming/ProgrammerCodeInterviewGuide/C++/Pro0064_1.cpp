/*************************************************************************
    > File Name: Pro0064_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <list>
#include <unordered_map>
#include <iterator>
#include <algorithm>

using namespace std;

template<typename Keytype, typename Valuetype>
class LRU
{
	private:
		typedef pair<Keytype, Valuetype> node;
		typedef typename list<node>::iterator iter;
		list<node> li;
		unordered_map<Keytype, iter> um;
		int len;
	public:
		LRU(int capacity):len(capacity)
		{

		}
		int get(const Keytype&);
		void put(const Keytype& key, const Valuetype& val);
};

template<typename Keytype, typename Valuetype>
int LRU<Keytype,Valuetype>::get(const Keytype& key)
{
	if(um.count(key) <= 0)
		return -1;
	else
		li.splice(li.begin(), li, um[key]);
	return li.front().second;
}


template<typename Keytype, typename Valuetype>
void LRU<Keytype,Valuetype>::put(const Keytype& key, const Valuetype& val)
{
	if(um.count(key) > 0)
	{
		li.splice(li.begin(), li, um[key]);
		um[key] = li.begin();
	}
	else
	{
		li.push_front(make_pair(key,val));
		um[key] = li.begin();
	}
	if(li.size() > len)
	{
		um.erase(li.back().first);
		li.pop_back();
	}
	return;
}

int main(void)
{
	int n,k;
	cin>>n>>k;
	LRU<int, int> lru(k);
	for(int i = 0; i < n; ++i)
	{
		int cmd;
		cin>>cmd;
		if(cmd == 1)
		{
			int op1, op2;
			cin>>op1>>op2;
			lru.put(op1, op2);
		}
		else
		{
			int op1;
			cin>>op1;
			cout<<lru.get(op1)<<endl;
		}
	}
	return 0;

	lru.put(1,1);
	lru.put(2,2);
	lru.put(3,3);
	cout<<lru.get(1)<<endl;
	lru.put(4,4);
	cout<<lru.get(2)<<endl;
	return 0;
}	




















