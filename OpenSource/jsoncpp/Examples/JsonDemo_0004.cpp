/*************************************************************************
    > File Name: JsonDemo_0004.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <cstdio>
#include <string>
#include <memory>
#include <exception>
#include <fstream>
#include "jsoncpp/json/json.h"

using namespace std;

int main(void)
{
	Json::Value root;
	Json::Value header;
	Json::Value arrayObj;
	Json::Value item;
	header["pro"] = "17";
	header["service_type"] = "GPS11";

	char buffer[256];
	ifstream in("test.txt");
	int i = 0;
	if(!in.is_open())
	{
		cout<<"Error openning file!"<<endl;
		exit(1);
	}
	while(!in.eof())
	{
		in.getline(buffer,100);
		item[buffer] = i;
		i++;
		arrayObj.append(item);
		item.clear();
	}
	root["HEADER"] = header;
	root["BODYLIST"] = arrayObj;
	std::string out = root.toStyledString();
	std::cout<<out<<std::endl;
	in.close();

	return 0;
}
