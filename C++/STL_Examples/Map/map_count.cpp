


#include <iostream>
#include <map>

using namespace std;

int main(int argc,char *argv[])
{
	map<char,int>myMap;
	myMap['a'] = 101;
	myMap['b'] = 202;
	myMap['c'] = 303;
	char ch;
	for(ch = 'a'; ch < 'h'; ch++)
	{
		cout<<ch;
		int ret = myMap.count(ch);
		if(ret > 0)
			cout<<" is a element"<<endl;
		else
			cout<<" is not a element"<<endl;
	}
	return 0;
}