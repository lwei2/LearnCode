/*************************************************************************
    > File Name: Exponentitation.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <string.h>
using namespace std;

class Solution
{
   public:
	void Exponentitation1()
	{
		char r[6] = {'0'};
		int n = 1;
		while(cin>>r>>n)
		{
			int m[250], b[6];
			memset(m,0,sizeof(m));
			memset(b,0,sizeof(b));
			int i,j,k;
			int nNumber = 0,nData = 0;
			for(i = 0; i < 6; i++)
			{
				if(r[i] == '.')
				{
					k = i;
					break;
				}
			}
			if(i == 6)
			{
				j = 0;
				while(r[j] == '0')
				{
					r[j] = 'a';
					j++;
				}
				nNumber = 0;
			}
			else
			{
				i = 0;
				while(i < k && r[i] == '0')
				{
					r[i] = 'a';
					i++;
				}
				i = 5;
				while(i > k && (!r[i] || r[i] == '0'))
				{
					r[i] = 'a';
					i--;
				}
				for(i = 5; i >= 0; --i)
				{
					if(!r[i] || r[i] == 'a')
						continue;
					if(r[i] == '.')
						break;
					nNumber++;
				}
			}
			for(i = 0, j = 0; i < 6; ++i)
			{
				if(r[i] == 'a' || r[i] == '.' || !r[i])
					continue;
				b[j] = (int)(r[i] - '0');
				j++;
			}
			while(j < 6)
			{
				b[j] = -1;
				j++;
			}
			for(i = 0; i < 6; ++i)
			{
				if(b[i] == -1)
					continue;
				nData = nData*10 + b[i];
			}
			for(j = 5, i = 250-1; j >=0 && i>=0; --j)
			{	
				if(b[j] == -1)
					continue;
				else
				{
					m[i] = b[j];
					i--;
				}
			}
			nNumber = nNumber*n;
			n--;
			while(n-- && i!=249)
			{
				for(j = i + 1; j < 250; j++)
				{
					int t = m[j]*nData;
					m[j] = 0;
					if(t == 0)
						m[j] = 0;
					else
					{
						int s = j;
						while(t/10!=0 || t%10!=0)
						{
							m[s] = m[s] + t%10;
							int st = s;
							while(m[st] > 9)
							{
								int st1 = m[st];
								m[st] = st1%10;
								st--;
								m[st] = m[st] + st1/10;
							}
							s--;
							t=t/10;
						}
					}
				}
				i = 0;
				while(m[i] == 0)
					i++;
				i--;
			}
			i = 0;
			while(i < 250 && m[i] == 0)
				i++;
			if(nNumber == 0)
			{
				if(i == 250)
					cout<<0<<endl;
				else
				{
					for(; i < 250; ++i)
						cout<<m[i];
					cout<<endl;
				}
			}
			else
			{
				if(nNumber > 250 - i)
				{
					cout<<".";
					while(nNumber-->250-i)
						cout<<0;
					for(;i < 250; i++)
						cout<<m[i];
					cout<<endl;
				}
				else
				{
					for(; i < 250; ++i)
					{
						if(nNumber == 250 - i)
							cout<<".";
						cout<<m[i];
					}
					cout<<endl;
				}
			}
		}
	}

   public:
	void Exponentitation2()
	{

	}
};


int main(void)
{
	Solution s;
	s.Exponentitation1();

	return 0;
}
