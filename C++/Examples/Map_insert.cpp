#include<iostream>
#include<map>
#include<string>

using namespace std;

int main(void)
{
	map<int,string>mapStudent;
	//insert 1
	mapStudent.insert(pair<int,string>(1,"Jack"));
	mapStudent.insert(pair<int,string>(2,"Tom"));
	mapStudent.insert(pair<int,string>(3,"Susen"));
	
	pair<map<int,string>::iterator,bool> Insert_pair;
	Insert_pair = mapStudent.insert(pair<int,string>(0,"Han"));
	if(Insert_pair.second == true)
		cout<<"Insert Successfule"<<endl;
	else
		cout<<"Insert Failure"<<endl;
		
	//insert 2
	mapStudent.insert(map<int,string>::value_type(4,"Jum"));
	mapStudent.insert(map<int,string>::value_type(5,"Anmy"));
	//insert 3
	mapStudent[6] = "Rose";
	
	cout<<"nSize:"<<mapStudent.size()<<endl;

	map<int,string>::iterator iter;
	for(iter = mapStudent.begin(); iter!=mapStudent.end();iter++)
	{
		cout<<iter->first<<' '<<iter->second<<endl;
	}
	return 0;
}

