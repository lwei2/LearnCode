/*************************************************************************
    > File Name: Pro0065_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;


template<typename Keytype, typename Valuetype>
class LFU
{
	typedef typename list<Keytype>::iterator iter;
	private:
		int cap;
		int size;
		int minfreq;
		unordered_map<Keytype, pair<Valuetype, int>> record;
		unordered_map<int, list<Keytype>> fre;
		unordered_map<Keytype, iter> pos;
	public:
		LFU(int capacity):cap(capacity),size(0),minfreq(0)
		{
		}
		int get(const Keytype& key);
		void set(const Keytype& key, const Valuetype& value);
};


template<typename Keytype, typename Valuetype>
int LFU<Keytype, Valuetype>::get(const Keytype& key)
{
	if(record.count(key) <= 0)
		return -1;
	fre[record[key].second].erase(pos[key]);
	record[key].second++;
	fre[record[key].second].emplace_back(key);
	pos[key] = --fre[record[key].second].end();
	if(fre[minfreq].size() == 0)
		++minfreq;
	return record[key].first;
}

template<typename Keytype, typename Valuetype>
void LFU<Keytype, Valuetype>::set(const Keytype &key, const Valuetype& value)
{
	int flag = get(key);
	if(-1 != flag)
	{
		record[key].first = value;
		return;
	}
	if(size >= cap)
	{
		record.erase(fre[minfreq].front());
		pos.erase(fre[minfreq].front());
		fre[minfreq].pop_front();
		--size;
	}
	record[key] = make_pair(value, 1);
	fre[1].emplace_back(key);
	pos[key] = --fre[1].end();
	minfreq = 1;
	++size;
	return;
}

int main(void)
{
	int n,k;
	cin>>n>>k;
	LFU<ll,ll> lfu(k);
	for(int i = 0; i < n; ++i)
	{
		int cmd;
		cin>>cmd;
		if(cmd == 1)
		{
			ll op1, op2;
			cin>>op1>>op2;
			lfu.set(op1,op2);
			continue;
		}
		else
		{
			ll op;
			cin>>op;
			cout<<lfu.get(op)<<endl;
			continue;
		}
	}
	return 0;
}
