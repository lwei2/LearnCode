/*************************************************************************
    > File Name: 12-3.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int main(void)
{
	char filename[80];
	cin>>filename;
	ifstream infile(filename);
	try{
		if(!infile)
			throw string(filename);
	}catch(string s){
		cout<<"file:"<<s<<"failed to open!"<<endl;
		return 0;
	}
	cout<<"read file:"<<filename<<" is ok"<<endl;
	for(string str; getline(infile,str);)
		cout<<str<<endl;

	return 0;
}
