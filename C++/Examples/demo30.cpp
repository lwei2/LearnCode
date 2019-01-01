#include<iostream>

using namespace std;

int main(void)
{
	int i = 0;
	int j = 5;
	do{
		i++;
		j--;
		if(i>3)
		  break;
	}while(j>0);
	cout<<"i="<<i<<'\t'<<"j="<<j<<endl;

	return 0;
}
