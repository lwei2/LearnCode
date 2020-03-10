/*************************************************************************
    > File Name: template_0001.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

template <class T1, class T2>
class Pair
{
	public:
		Pair(T1 k ,T2 v):m_key(k),m_value(v)
		{

		}	
		bool operator < (const Pair<T1, T2> &p) const;
	private:
		T1 m_key;
		T2 m_value;
};

template <class T1, class T2>
bool Pair<T1,T2>::operator<(const Pair<T1, T2>&p)const
{
	return m_value < p.m_value;
}

int main(void)
{
	Pair<string, int> Astudent("Jay", 20);
	Pair<string, int> Bstudent("Tom", 31);
	cout<<(Astudent < Bstudent)<<endl;
	return 0;
}
