Problems: 理解智能指针的实现细节
	智能指针是用来实现指针指向的对象的共享的，其实现的基本思想：
		1.每次创建类的新对象时，初始化指针并将引用计数置为1；
		2.当对象作为另一个对象的副本而创建时，拷贝构造函数拷贝指针并增加与之相应的引用计数。
		3.对一个对象进行赋值时，赋值操作时，赋值操作符减少左操作数所指向对象的引用计数（如果引用计数减至0，则删除对象），并增加右操作数所指对象的引用计数。
		4.调用析构函数，减少引用计数（如果引用计数减至0，则删除基础对象）.
		5.重载“->”以及“*”操作符，使得智能指针有类似于普通指针的操作。

		template<class T>
		class SmartPtr
		{
			public:
				SmartPtr(T *p = 0);
				SmartPtr(const SmartPtr &src);
				SmartPtr&operator=(const SmartPtr&rhs);
				T *operator->();
				T &operator*();
				~SmartPtr();
			private:
				void decrRef()
				{
					if(--*m_pRef == 0)
					{
						delete m_ptr;
						delete m_pRef;
					}
				}
				T *m_ptr;
				size_t *m_pRef;
		};

		template<class T>
		SmartPtr<T>::SmartPtr(T *p)
		{
			m_ptr = p;
			m_pRef = new size_t(1);
		}
		
		template<class T>
		SmartPtr<T>::SmartPtr(const SmartPtr<T>& src)
		{
			m_ptr = src.m_ptr;
			m_pRef++;
			m_pRef = src.m_pRef;
		}
		
		
		template<class T>
		SmartPtr<T>::~SmartPtr()	
		{
			decrRef();
			cout<<"SmartPtr:destructor"<<endl;
		}
		
		template<class T>
		T *SmartPtr<T>::operator->()
		{
			if(m_ptr)
				return m_ptr;
			throw std::runtime_error("access through of NULL pointer");
		}

		template<class T>
		SmartPtr<T>& SmartPtr<T>::operator = (const SmartPtr<T>& rhs)
		{
			++*rhs.m_pRef;
			decrRef();
			m_ptr = rhs.m_ptr;
			m_pRef = rhs.m_pRef;
			return *this;
		}
		int main(void)
		{
			SmartPtr<Test> t1;
			SmartPtr<Test> t2(new Test("Terry"));
			SmartPtr<Test> t3(new Test("John"));
			try{
				t1->ShowName();		
			}catch(const exception &err)
			{
				cout<<err.what()<<endl;
			}
			t2->ShowName();
			*t2 = "David";
			t2->ShowName();
			t2 = t3;
			cout<<"End of main.."<<endl;
			return 0;
		}
