Problems: list和vector右什么区别？
	解：vector和数组类似，它拥有一段连续的内存空间，并且起始地址不变，因此它能非常好地支持随机存取（使用[]操作符访问其中的元素）。但由于它的内存空间是连续的，所以在中间进行插入和删除操作会造成内存块的拷贝（复杂度是O(n)）.另外，当该数组后的内存空间不够时，需要重新申请一块足够大的内存并进行内存拷贝。这些都大大影响了vector的效率。
	list是由数据结构中的双向链表实现的。因此它的内存空间可以是不连续的，只能通过指针来进行数据的访问。这个特点使得它的随机存取变得非常没有效率，需要遍历中间的元素，搜索复杂度O(n)，因此它没有提供[]操作符的重载。但由于链表的特点，它可以很好支持任意地方的删除和插入。

	#include <iostream>
	#include <vector>
	#include <list>
	using namespace std;
	int main(void)
	{
		vector<int> v;
		list<int> l;
		for(int i = 0; i < 8; i++)
		{
			v.push_back(i);
			l.push_back(i);
		}
		cout<<"v[2]:"<<v[2]<<endl;
		cout<<"l[2]:"<<l[2]<<endl;
		cout<<(v.begin() < v.end())<<endl;
		cout<<(l.begin() < l.end())<<endl;
		cout<<*(v.begin() + 1)<<endl;
		vector<int>::iterator itv = v.begin();
		list<int>::iterator itl = l.begin();
		itv = itv + 2;
		itl++;itl++;
		cout<<*itv<<endl;
		cout<<*itl<<endl;
		return 0;
	}

	由于vector拥有一段连续的内存空间，能非常好的支持随机存取，因此vector<int>::iterator支持+,+=,<等操作符。而list的内存可以是不连续的，它不支持随机访问。因此list<int>::iterator不支持+,+=,<等操作符运算。总之，如果需要高效的随机存取，而不在乎插入和删除的效率，就用vector。如果需要大量的插入和删除，而不关心随机存取，则应使用list。

	vector拥有一段连续的内存空间，因此支持随机存取，如果需要高效的随机存取，而不在乎插入和删除的效率，就使用vector。
	list拥有一段不连续的内存空间，因此支持随机存取。如果需要大量的删除和插入，而不关心随机存取，则应使用list.
