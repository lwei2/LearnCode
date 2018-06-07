/*************************************************************************
    > File Name: type.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include<iostream>
#include<string>
#include<limits>

using namespace std;

int main(void)
{
	cout<<"type:"<<"**************size******************"<<endl;
	cout<<"bool size:"<<sizeof(bool)<<endl;
	cout<<"bool max_value:"<<(numeric_limits<bool>::max)()<<endl;
	cout<<"bool min_value:"<<(numeric_limits<bool>::min)()<<endl;
	
	cout<<"char size:"<<sizeof(char)<<endl;
	cout<<"char max_value:"<<(numeric_limits<char>::max)()<<endl;
	cout<<"char min_value:"<<(numeric_limits<char>::min)()<<endl;

	cout<<"signed char size:"<<sizeof(signed char)<<endl;
	cout<<"signed char max_value:"<<(numeric_limits<signed char>::max)()<<endl;
	cout<<"signed char min_value:"<<(numeric_limits<signed char>::min)()<<endl;

	cout<<"short size:"<<sizeof(short)<<endl;
	cout<<"short max_value:"<<(numeric_limits<short>::max)()<<endl;
	cout<<"short min_value:"<<(numeric_limits<short>::min)()<<endl;

	cout<<"int size:"<<sizeof(int)<<endl;
	cout<<"int max_value:"<<(numeric_limits<int>::max)()<<endl;
	cout<<"int min_value:"<<(numeric_limits<int>::min)()<<endl;

	cout<<"long size:"<<sizeof(long)<<endl;
	cout<<"long max_value:"<<(numeric_limits<long>::max)()<<endl;
	cout<<"long min_value:"<<(numeric_limits<long>::min)()<<endl;

	cout<<"float size:"<<sizeof(float)<<endl;
	cout<<"float max_value:"<<(numeric_limits<float>::max)()<<endl;
	cout<<"float min_value:"<<(numeric_limits<float>::min)()<<endl;

	cout<<"double size:"<<sizeof(double)<<endl;
	cout<<"double max_value:"<<(numeric_limits<double>::max)()<<endl;
	cout<<"double min_value:"<<(numeric_limits<double>::min)()<<endl;

	cout<<"string size:"<<sizeof(string)<<endl;
	return 0;
}
