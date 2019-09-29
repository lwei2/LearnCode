/*************************************************************************
    > File Name: Lambda_0007.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class FunctorClass
{
	public:
		explicit FunctorClass(int &eventCount):m_eventCount(eventCount)
		{

		}
		void operator()(int n)const 
		{
			cout<<n;
			if(n % 2 == 0)
			{
				cout<<" is event"<<endl;
				++m_eventCount;
			}
			else
				cout<<" is odd"<<endl;
		}
	private:
		FunctorClass& operator=(const FunctorClass&);
		int &m_eventCount;
};

int main(void)
{
	vector<int> v;
	for(int i = 1; i < 10; ++i)
		v.push_back(i);
	int eventCount = 0;
	for_each(v.begin(), v.end(), FunctorClass(eventCount));
	cout<<"There are "<<eventCount<<"event numbers in the vector."<<endl;

	return 0;
}
