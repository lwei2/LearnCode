Problems: vector中iterator的使用
	解：
		vector<int> array;
		array.push_back(1);
		array.push_back(2);
		array.push_back(3);
		for(vector<int>::size_type i = array.size() - 1;  i >= 0; --i)
			cout<<array[i]<<endl;
		无法输出3 2 1，而是输出一大堆很大的数字
		for(vector<int>::size_type i = array.size(); i > 0; --i)
			cout<<array[i-1]<<endl;
		输出3 2 1,由于vector支持随机访问，并且重载了[]运算符,因此可以像数组那样来访问vector中的第i+1个元素。
		typedef _A::size_type size_type;
		typedef _SIZE size_type;	
		#define _SIZE size_t 
		typedef unsigned int size_t;
		无符号整数是大于等于0的，第一段代码中i>=0永远为true,程序会一直循环，输出很多随机数，最后程序崩溃。而第二段代码使用i>0作为循环条件，即i为0时结束循环。_
