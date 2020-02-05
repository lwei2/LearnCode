Problems: vector和deque有什么区别?在做应用时，如何选择？
	解：deque称为双向队列容器，表面上与vector非常相似，甚至有许多实现中直接替换vector。比较deque和vector两者的成员函数,可以发现：
	1.deque比vector多了push_front()和pop_front()两个函数。而这两个函数都是对于首部进行操作的，于是得到第一个使用deque的情况，就是当程序需要从收尾两端进行插入或删除元素的操作的时候。
	2.deque中不存在capacity()和reserve()成员函数，在vector中，这两个函数分别用于获取和设置容器容量。

	#include <iostream>
	#include <vector>
	using namespace std;
	int main(void)
	{
		vector<int> v;
		v.push_back(1);
		cout<<v.capacity()<<endl;
		v.reserve(10);
		cout<<v.capacity()<<endl;
		return 0;
	}
	对于vector来说，如果有大量的数据需要push_back，则应当使用reserve()函数先设定其容量大小。否则会出现许多次容量扩充操作，导致效率很低。
	而deque使用一段一段的定量内存，在进行内存扩充时也只是加一段定量内存，因此不存在容量的概念，也就没有capacity()和reserve()成员函数。
	最后，在插入操作上，deque和vector有很大的不同。由于vector是一块连续的内存，所以插入的位置决定执行效率，位置越偏向数组首部，效率低下，而deque中的内存是分段连续的，因此在不同段中的插入效率都相同。

	vector和deque的不同点：内部数据管理不同，为了提高效率，vector在添加元素之前最好调用reserve()设置容量，而deque则不需要。
	选择方法：一般情况下选择vector，但当需要从首尾两端进行插入或删除元素操作时，应该选择deque。
