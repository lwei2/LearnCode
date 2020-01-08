/*************************************************************************
    > File Name: JsonDemo_0002.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <string>
#include "jsoncpp/json/json.h"


using namespace std;
using namespace Json;

int main(void)
{
	string test = "{\"id\":1,\"name\":\"lwei2\"}";
	Reader reader;
	Value value;
	if(!reader.parse(test, value))
		return 0;
	string strValueDate = value["name"].asString();
	cout<<strValueDate<<endl;
	cout<<value["name"]<<endl;
	return 0;
}
