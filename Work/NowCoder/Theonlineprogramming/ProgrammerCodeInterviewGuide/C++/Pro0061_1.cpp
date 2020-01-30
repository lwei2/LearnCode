/*************************************************************************
    > File Name: Pro0061_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

int main(void)
{
	int N;
	cin>>N;
	int M[100000][4];
	int l,r,u,d;
	cin>>M[0][0]>>M[0][1]>>M[0][2]>>M[0][3];
	long long int area = (M[0][2] - M[0][0])*(M[0][3] - M[0][1]);
	l = M[0][0];
	r = M[0][2];
	u = M[0][3];
	d = M[0][1];
	for(int i = 1; i < N; i++)
	{
		cin>>M[i][0]>>M[i][1]>>M[i][2]>>M[i][3];
		area += (M[i][2] - M[i][0])*(M[i][3] - M[i][1]);
		if(M[i][0] < l)
			l = M[i][0];
		if(M[i][2] > r)
			r = M[i][2];
		if(M[i][3] > u)
			u = M[i][3];
		if(M[i][1] < d)
			d = M[i][1];
	}
	if(area != (r - l)*(u - d))
		cout<<"No"<<endl;
	else
		cout<<"Yes"<<endl;
	return 0;
}
