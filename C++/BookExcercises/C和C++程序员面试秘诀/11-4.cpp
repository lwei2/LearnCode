Problems: 理解vector容器的使用
	typedef vector IntArray;
	IntArray array;
	array.push_back(1);
	array.push_back(2);
	array.push_back(2);
	array.push_back(3);
	for(IntArray::iterator itor = array.begin(); itor != array.end(); ++itor)
{
	if(2 == *itor)
		array.erase(itor);
}
	解析:
		第2行代码没有使用类型参数，这将会导致编译错误，由于array需要添加int类型的元素，因此代码第2行定义vector时应该加上int类型。
		typedef vector<int> IntArray;
		第3行~第12行代码的for循环，只能删除array数组中的第一个2，而不能删除所有的2.这是因为，每次调用array.erase(itor);后，被删除元素之后的内容会自动往前移，导致迭代漏项，应该在删除一项后使itor--,使之从已经前移的下一个元素起继续遍历。
	
	#include <iostream>
	#include <vector>
	using namespace std;

	int main(void)
	{
		typedef vector<int> IntArray;
		IntArray array;
		array.push_back(1);
		array.push_back(2);
		array.push_back(2);
		array.push_back(3);
		for(IntArray::iterator itor = array.begin(); itor != array.end(); itor++)
		{
			if(2 == *itor)
			{
				array.erase(itor);
				--itor;
			}
		}
		for(itor = array.begin(); itor != array.end(); itor++)
		{
			cout<<*itor<<endl;
		}
		return 0;
	}
	解：1.没有使用类型参数，会导致编译错误。
		2.只能删除array数组中的第一个2,而不能删除所有的2.因为每次调用array.erase(itor);后被删除元素之后的内容会自动往前移，导致迭代漏项。

