#include <iostream>
using namespace std;

#pragma pack(1)
class test
{
	private:
		char c = '1';
		int i ;
		short s = 2;
};
class test2
{
	private:
		int i ;
		char c = '1';
		short s = 2;
};
int main(void)
{
	cout<<sizeof(test)<<endl;
	cout<<sizeof(test2)<<endl;
	return 0;
}
