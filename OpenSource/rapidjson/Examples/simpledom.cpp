/*************************************************************************
    > File Name: simpledom.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include <iostream>
#include <string>
#include <assert.h>
#include "rapidjson/document.h"
#include "rapidjson/writer.h"
#include "rapidjson/stringbuffer.h"

using namespace std;
using namespace rapidjson;


int main(void)
{
	//1.把Json解析至DOM
	//const char *json ="{\"project\":\"rapidjson\",\"stars\":10}";
  	const char *json = "{\"project\":\"rapidjson\",\"hello\":\"welcome to the rapidjson world\",\"year\":2018,\"month\":6,\"day\":18}";
	Document d;
	d.Parse(json);

	string str = d["project"].GetString();
	str.append(",");
	str +=d["hello"].GetString();
	int year,month,day;
	year = d["year"].GetInt();
	month = d["month"].GetInt();
	day = d["day"].GetInt();

	cout<<str.c_str()<<endl;
	cout<<"Date:"<<year<<"-"<<month<<"-"<<day<<endl;
/*	//2.利用DOM作出修改
	Value &s = d["stars"];
	s.SetInt(s.GetInt() + 1);

	cout<<"=========="<<endl;
	string str = d["project"].GetString();
	cout<<str.c_str()<<endl;
	int n = d["stars"].GetInt();
	cout<<n<<endl; */

	//3.把DOM转换成JSON
	StringBuffer buffer;
	Writer<StringBuffer> writer(buffer);
	d.Accept(writer);

	cout<<buffer.GetString()<<endl;
	return 0;
}


