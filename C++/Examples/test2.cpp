#include <iostream>

using namespace std;

struct ColorVector
{
	double r;
	double g;
	double b;
	double a;
};
int main(void)
{
	cout<<"alignof(ColorVector):"<<alignof(ColorVector)<<endl;
	return 1;
}
