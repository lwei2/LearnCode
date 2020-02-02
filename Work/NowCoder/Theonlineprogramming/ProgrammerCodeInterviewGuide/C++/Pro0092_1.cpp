/*************************************************************************
    > File Name: Pro0092_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

int main(void)
{
	int n,x;
	cin>>n;
	int	arr[100005];
	for(int i = 0; i < n; ++i)
		arr[i] = n;
	arr[0] = 0;
	for(int i = 0; i < n; ++i)
	{
		cin>>x;
		for(int j = 1; j <= x && i + j < n; ++j)
			if(arr[i + j] > arr[i] + 1)
				arr[i+j] = arr[i] + 1;
	}
	cout<<arr[n-1];
	return 0;
}
