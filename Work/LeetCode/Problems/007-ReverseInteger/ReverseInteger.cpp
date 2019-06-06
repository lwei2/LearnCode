/*************************************************************************
    > File Name: ReverseInteger2.cpp
    > Author: lwei
    > Mail: root@163.com 
    > Created Time: 2018年01月14日 星期日 11时58分52秒
 ************************************************************************/

#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>

using namespace std;
class Solution
{
	public:
		int reverse(int x)
		{
			if(x==0)
				return 0;
			int flag=1;
			if(x<0)
			{
				flag=-1;
				x=-x;
			}
			int64_t ret=0;
			char str[16];
			snprintf(str,sizeof(str),"%d",x);
			for(int i=strlen(str)-1;i>=0;--i)
			{
				ret=10*ret+str[i]-'0';
			}
			if((flag>0&&ret>0x7fffffff)||(flag<0&&ret>0x80000000))
				return 0;
			return ret*flag;
		}
};
int main(int argc,char *argv[])
{
	Solution s;
	int x;
	cin>>x;
	cout<<s.reverse(x)<<endl;
	return 0;
}
