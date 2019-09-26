/*************************************************************************
    > File Name: 8-1-Exam.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include<iostream>
#include<string.h>
#include<iomanip.h>

using namespace std;


#define max 100

class Card
{
	int top;
	char date[max][11];
	int money[max];
	int rest[max];
	static int sum;
	public:
		Card()
		{
			cout<<"call construction"<<endl;
		}
		~Card()
		{
			cout<<"call destruction"<<endl;			
		}
		void Cardin(char d[], int m)
		{
			strcpy(date[top],d);
			money[top] = m;
			sum += m;
			rest[top] = sum;
			top++;
		}
		void Cardout(char d[], int m)
		{
			if(sum >= m)
			{
				strcpy(date[top],d);
				money[top] = -m;
				sum -= m;
				rest[top] = sum;
				top++;
			}
			else
			{
				cout<<"warnning:"<<d<<"get "<<m<<" failed"<<endl;
			}
		}


		
}
int main(void)
{

	return 0;
}
