/*************************************************************************
    > File Name: constructor_0007.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

class Rect
{
	public:
		Rect()
		{
			count++;
		}
		~Rect()
		{
			count--;
		}
		static int getCount()
		{
			return count;
		}
	private:
		static int count;
		int width;
		int height;
};

int Rect::count = 0;
int main(void)
{
	Rect r1;
	cout<<"The count of Rect:"<<Rect::getCount()<<endl;
	Rect r2(r1);
	cout<<"The count of Rect:"<<Rect::getCount()<<endl;
	return 0;
}
