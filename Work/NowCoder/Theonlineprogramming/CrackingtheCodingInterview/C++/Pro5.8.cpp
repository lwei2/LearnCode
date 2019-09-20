/*************************************************************************
    > File Name: Pro5.8.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :有一个单色屏幕储存在一维数组中，其中数组的每个元素代表连续的8位的像素的值，请实现一个函数，将第x到第y个像素涂上颜色(像素标号从零开始)，并尝试尽量使用最快的办法。

给定表示屏幕的数组screen(数组中的每个元素代表连续的8个像素，且从左至右的像素分别对应元素的二进制的从低到高位)，以及int x,int y，意义如题意所述，保证输入数据合法。请返回涂色后的新的屏幕数组。

测试样例：
[0,0,0,0,0,0],0,47
返回：[255,255,255,255,255,255]
 ************************************************************************/


#include <iostream>

using namespace std;

class Render
{
	public:
		vector<int> renderPixel(vector<int> screen, int x, int y)
		{
			for(int i = x; i <= y; i++)
			{
				int k = i%8;
				int t = i/8;
				screen[t] = screen[t] | (1 << k);
			}
			return screen;
		}
}
int main(void)
{
	return 0;
}
