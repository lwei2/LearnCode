/*************************************************************************
    > File Name: map_max_size.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include<iostream>
#include<map>

using namespace std;

int main(int argc,char *argv[])
{
  	int i;
	map<int,int>myMap;
	if(myMap.max_size()>1000)
	{
		for(i=0;i<1000;i++)
		  myMap[i] = 0;
	}
	else
	{
		cout<<"The map could not hold 1000 elements"<<endl;
	}	
 	return 0; 
}
