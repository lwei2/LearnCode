/*************************************************************************
    > File Name: constructor_0009.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <assert.h>

using namespace std;

class Rect
{
	public:
		Rect()
		{
			p = new int(100);
		}
		~Rect()
		{
			assert(p!=NULL);
			delete p;
		}
	private:
		int width;
		int height;
		int *p;
};

int main(void)
{
	Rect r1;
	Rect r2(r1);
	return 0;
}
