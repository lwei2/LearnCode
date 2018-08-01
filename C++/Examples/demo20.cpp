#include<iostream>

using namespace std;

int main(void)
{
	int n;
	do{
		cout<<"Enter Your Age:";
		cin>>n;
		if(n<=0)
		{
			cout<<"Enter the age has been error"<<endl;
			break;
		}
		if(n>0 && n<10)
		  cout<<"小孩"<<endl;
		else if(n<20)
		  cout<<"少年"<<endl;
		else if(n<30)
		  cout<<"青年"<<endl;
		else if(n<50)
		  cout<<"中年"<<endl;
		else if(n>=50)
		  cout<<"老年"<<endl;
		else 
		  cout<<"老老年"<<endl;
	}while(n<200);
}
