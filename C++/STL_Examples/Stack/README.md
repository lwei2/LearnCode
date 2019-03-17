#stack
std::stack
	template<class T, class Container = deque<T>> class stack;
LIFO stack
	堆栈是一种容器适配器，专门设计用于在LIFO上下文中操作(后进先出),其中元素仅从容器的一端插入和提取。
	堆栈是使用特定容器类的封装对象作为其底层容器的类，提供一组特定的成员函数来访问其元素。
member functions(成员函数)：
	constructor() - construct stack(public member function)
	empty() - test whether container is empty(public member function)
	size() - return size(public member function)
	top() - access next element(public member function)
	push() - insert element(public member function)
	emplace() - construct and insert element(public member function)
	pop() - remove top element(public member function)
	swap() - swap contents(public member function)
non-member function overloads(非成员函数):
	relational operators - relational operators for stack(function)
	swap(stack) - Exchange contents of stacks(public member function)
non-member class specializations
	uses_allocator<stack> uses allocator for stack(class template)

