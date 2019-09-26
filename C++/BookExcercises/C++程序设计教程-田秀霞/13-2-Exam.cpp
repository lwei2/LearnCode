/*************************************************************************
    > File Name: 13-2-Exam.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

template<class T>
class Nsort
{
	public:
		void Bubble2Sort(T *, int);
		void InsertSort(T*, int);
};

template<class T>
void Nsort<T>::Bubble2Sort(T *p, int Count)
{
	T temp;
	int left = 1;
	int right = Count  - 1;
	int t;
	do{
		for(int i = right; i >= left; i--)
		{
			if(p[i] < p[i-1])
			{
				temp = p[i];
				p[i] = p[i-1];
				p[i-1] = temp;
				t = i;
			}
		}
		left = t + 1;
		for(int i = left; i < right + 1; i++)
		{
			if(p[i] <p[i-1])
			{
				temp = p[i];
				p[i] = p[i-1];
				p[i-1] = temp;
				t = i;
			}
		}
		right = t - 1;
	}while(left<=right);
}

template<class T>
void Nsort<T>::InsertSort(T *p, int Count)
{
	T temp;
	int pos;
	for(int i = 1; i < Count; i++)
	{
		temp = p[i];
		pos = i - 1;
		while((pos>=0) && (temp < p[pos]))
		{
			p[pos+1] = p[pos];
			pos--;
		}
		p[pos+1] = temp;
	}
}
int main(void)
{
	int i;
	int a[10] = {
		34,6,2,345,66,0,-8,47,83,100
	};
	int b[10] ={
		1,3,5,7,9,11,13,15,17,19
	};
	Nsort<int> s;
	s.Bubble2Sort(a,10);
	for(i = 0; i < 10; i++)
		cout<<a[i]<<" ";
	cout<<endl;
	s.InsertSort(b,10);
	for(i = 0; i < 10; i++)
		cout<<b[i]<<" ";
	cout<<endl;
	char c[10] = {
		'a','b','e','c','f','d','g','h','j','i'
	};
	char d[10] = {
		'A','Q','Z','W','S','E','P','B','N','G'
	};
	Nsort<char> nc;
	nc.Bubble2Sort(c,10);
	for(i = 0; i < 10; i++)
		cout<<c[i]<<" ";
	cout<<endl;
	nc.InsertSort(d,10);
	for(i = 0; i < 10; i++)
		cout<<d[i]<<" ";
	cout<<endl;
	return 0;
}
