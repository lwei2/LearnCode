/*************************************************************************
    > File Name: 3-5.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

int main(void)
{
	char chexing;
	int lucheng;
	cout<<"Enter the x and f:"<<endl;
	cin>>chexing;
	cin>>lucheng;
	if(lucheng > 0)
	{
		switch(chexing)
		{
			case 'x':
				cout<<((lucheng <=3) ?7:(7+(lucheng-3)*2.1))<<endl;
				break;
			case 'f':
				cout<<((lucheng <=3) ?8:(8+(lucheng-3)*2.4))<<endl;
				break;
			case 's':
				cout<<((lucheng <=3) ?9:(9+(lucheng-3)*2.7))<<endl;
				break;
			default:
				cout<<"Cant not find!"<<endl;
		}
	}
	else
		cout<<"the lucheng is failed!"<<endl;
	return 0;
}
