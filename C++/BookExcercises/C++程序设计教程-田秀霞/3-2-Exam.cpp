/*************************************************************************
    > File Name: 3-2-Exam.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <math.h>
using namespace std;

int main(void)
{
	dobule x, i = 10000000;
	int j = 0;
	unsigned int quotient, remainder;
	bool beginFlag = 0, zeroFlag = 0;
	cout<<"Enter the number:";
	cin>>x;
	while(x <= 0 || x >= 100000000)
	{
		if(j >= 2)
		{
			cout<<"You input the number wrong!";
		}
		cout<<endl;
		cin>>x;
		j++;		
	}
	x = floor(x*100 + 0.5)/100;
	while(i >0.001)
	{
		if(i >= 1)
			quotient = (unsigned int)floor(x/i);
		else
		{
			if(i >= 0.1)
				quotient = (unsigned int)floor(x*10);
			else
				quotient = (unsigned int)floor(x*100);
		}
		remainder = quotient%10;
		if(remainder!=0)
			beginFlag = 1;
		if((zeroFlag == 1) && (beginFlag == 1) && (i >= 1) && (remainder > 0))
			cout<<"零";
		switch(remainder)
		{
			case 0:
				break;
			case 1:
				cout<<"壹";
				break;
			case 2:
				cout<<"贰";
				break;
			case 3:
				cout<<"叁";
				break;
			case 4:
				cout<<"肆";
				break;
			case 5:
				cout<<"伍";
				break;
			case 6:
				cout<<"陆";
				break;
			case 7:
				cout<<"柒";
				break;
			case 8:
				cout<<"捌";
				break;
			case 9:
				cout<<"玖";
				break;
		}
		if(remainder > 0)
			zeroFlag = 0;
		else if(beginFlag == 1)
			zeroFlag = 1;
		if(beginFlag == 1)
		{
			if(i == 10000000 && remainder > 0)
				cout<<"仟";
			if(i == 1000000 && remainder > 0)
				cout<<"百";
			if(i == 100000 &&remainder > 0)
				cout<<"拾";
			if(i == 10000)
				cout<<"万";
			if((i == 1000) && remainder > 0)
				cout<<"仟";
			if((i == 100) && remainder > 0)
				cout<<"佰";
			if((i == 10) && remainder > 0)
				cout<<"拾";
			if(i == 1)
				cout<<"元";
			if(i == 0.1 && remainder > 0)
				cout<<"角";
			if(i == 0.01 && remainder > 0)
				cout<<"分";
		}
		i = i/10;
	}
	cout<<"整"<<endl;
	return 0;
}
