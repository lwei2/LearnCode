#include<iostream>
#include<vector>

using namespace std;

int main(int argc,char *argv[])
{
	vector<int> vec;
	int i ;
	cout<<"vector size ="<<vec.size()<<endl;

	for(i=0;i<5;i++)
		vec.push_back(i);
	cout<<"extended vector size="<<vec.size()<<endl;
	for(i=0;i<5;i++)
		cout<<"value:"<<vec[i]<<endl;
	vector<int>::iterator it = vec.begin();
	while(it!=vec.end())
	{
		cout<<"value:"<<*it<<endl;
		++it;
	}
	return 0;
}
