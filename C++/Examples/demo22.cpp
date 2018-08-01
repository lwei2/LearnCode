#include<iostream>
using namespace std;

int main(void)
{
	int n,r,c,m,j=0;
	cout<<"Enter the number:";
	cin>>m;
	while(m>=14)
	{
		if(j>=2)
		{
			cout<<"输入的数已达到三次错误"<<endl;
			return 0;
		}
		cout<<"重新输入!"<<endl;
		cin>>m;
		j++;
	}
	for(n=0;n<=m-1;n++)
	{
		for(r=1;r<15-n;r++)
		  cout<<" ";
		c =1;
		cout<<c<<" ";
		for(r=1;r<=n;r++)
		{
			c=c*(n-r+1)/r;
			if(c<100)
			  if(c<10)
				cout<<c<<" ";
			  else
				cout<<c<<" ";
			else
			  cout<<c<<" ";
		}
		cout<<endl;
	}
	return 0;
}
