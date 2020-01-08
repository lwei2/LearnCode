/*************************************************************************
    > File Name: JsonDemo_0001.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <string>
#include "jsoncpp/json/json.h"
#include "jsoncpp/json/value.h"
#include "jsoncpp/json/writer.h"

using namespace std;

int main(void)
{
	cout<<"Hello World!"<<endl;
	Json::Value root;
	Json::FastWriter fWriter;
	root["ModuleType"] = Json::Value(1);
	root["ModuleCode"] = Json::Value("China");
	cout<<fWriter.write(root)<<endl;

	Json::Value sub;
	sub["version"] = Json::Value("1.0");
	sub["city"] = Json::Value(root);
	fWriter.write(sub);
	cout<<sub.toStyledString()<<endl;

	return 0;
}
