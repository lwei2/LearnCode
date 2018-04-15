/*************************************************************************
    > File Name: String_empty.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include<iostream>
#include<string>

using namespace std;

int main(void)
{
  	string content;
	string line;
	cout<<"Please introduce a text.Enter an empty line to finish:"<<endl;
	do{
		getline(cin,line);
		content+=line+'\n';
	}while(!line.empty());
	cout<<"The text you introduce was:"<<content<<endl;
	return 0;
}
