/*************************************************************************
    > File Name: JsonDemo_0003.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <cstdio>
#include "jsoncpp/json/json.h"

using namespace std;

int main(void)
{
	string message = "{ \"data\" : { \"username\": \"test\"}, \"type\":6}";
	Json::Reader reader(Json::Features::strictMode());
	Json::Value parseData;
	if(reader.parse(message.c_str(), parseData))
	{
		int type = parseData.get("type", 0).asInt();
		Json::Value frameData = parseData.get("data", 0);
		string username = frameData.get("username", 0).asString();
		printf("type:%d, userName:%s\n", type, username.c_str());
	}

	Json::Value data;
	Json::Value frame;
	Json::FastWriter fWriter;
	frame["type"] = 66;
	data["username"] = "test";
	frame["data"] = data;
	string result = fWriter.write(frame);
	printf("result:%s\n", result.c_str());

	return 0;
}
