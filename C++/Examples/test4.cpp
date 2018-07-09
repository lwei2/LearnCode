#include <iostream>
using namespace std;

class test
{
	private:
		char c = '1';
		int i;
		short s =2;
};

int main(void)
{
	cout<<sizeof(test)<<endl;
	return 0;
}
