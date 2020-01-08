/*************************************************************************
    > File Name: vector_0007.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>

using namespace std;

typedef struct rect
{
	int id;
	int length;
	int width;
	bool operator < (const rect & a) const
	{
		if(id != a.id)
			return id < a.id;
		else
		{
			if(length != a.length)
				return length < a.length;
			else
				return width < a.width;
		}
	}
}Rect;

int main(void)
{
	vector<Rect> ivec;
	Rect rect;
	rect.id = 1;
	rect.length = 2;
	rect.width = 3;
	ivec.push_back(rect);
	vector<Rect>::iterator it = ivec.begin();
	cout<<(*it).id <<" "<<(*it).length <<" "<<(*it).width<<endl;
	return 0;
}
