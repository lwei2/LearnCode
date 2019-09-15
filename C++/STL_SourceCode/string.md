# string
## member functions
		1.C++98
			default		(1) string();
			copy		(2)	string(const string& str);
			substring	(3)	string(const string& str, size_t pos, size_t len = pos);
			fromt c-string(4) string(const char *s);
			fromt sequence(5) string(const char *s, size_t n);
			fill		(6)	string(size_t n, char c);
			range		(7)	template<class InputIterator> string(InputIterator first, InputIterator last);
		2.C++11(C++98)
			initializer list	(8)	string(initializer_list<char> il);
			move				(9) string(string &&str) noexcept;
string::append
	1.Appends a copy of str.
		string& append(const string& str);
	2.string& append(const string& str, size_t subpos, size_t sublen = npos);
	3.string& append(const char *s);
	4.string& append(const char *s,size_t n);
	5.string& append(size_t n, char c);
	6.template<class InputIterator>
		string& append(InputIterator first, InputIterator last);
	7.string& append(initializer_list<char> il);

	参数:
	返回值:*this


string::assign
	1.string& assign(const string& str);
	2.string& assign(const string& str, size_t subpos, size_t sublen = npos);
	3.string& assign(const char *s);
	4.string& assign(const char *s, size_t n);
	5.string& assign(size_t n, char c);
	6.template<class InputIterator>
		string& assign(InputIterator first, InputIterator last);
	7.string& assign(initializer_list<char> il);
	8.string& assign(string&& str) noexcept;


	参数:
	返回值:*this

string::at
	1.char& at(size_t pos);
	2.const char& at(size_t pos) const;
	
	参数:
	返回值:字符串中指定位置的字符


string::back
	1.char& back();
	2.const char& back() const;

	参数:
	返回值:对字符串最后一个字符的引用

string::begin
	1.iterator begin();
	2.const_iterator begin() const;


	参数:
	返回值:指向首个的迭代器


string::capacity
	1.size_t capacity() const noexcept;

string::cbegin
	1.const_iterator cbegin() const noexcept;

string::cend
	1.const_iterator cend() const noexcept;

string::clear
	1.void clear() noexcept;


string::compare
	1.int compare(const string& str) const noexcept;
	2.int compare(size_t pos, size_t len, const string& str) const;
	3.int compare(size_t pos, size_t len, const string& str, size_t subpos, size_t sublen = npos) const;
	4.int compare(const char* s) const;
	5.int compare(size_t pos, size_t len, const char* s) const;
	6.int compare(size_t pos, size_t len, const char* s, size_t n) const;

string::copy
	1.size_t copy(char* s, size_t len, size_t pos = 0) const;

	参数：
	返回值：size_t 无符号整型

string::crbegin
	1.const_reverse_iterator crbegin() const noexcept;

	参数:
	返回值:


string::crend
	1.const_reverse_iterator crend() const noexcept;


string::c_str
	1.const char* c_str() const noexcept;



string::data
	1.const char* data() const noexcept;

string::empty
	1.bool empty() const noexcept;

	返回值:若真则字符串为空，反之，不为空。

string::end
	1.iterator end() noexcept;
	2.const_iterator end() noexcept;

string::erase
	1.string& erase(size_t pos = 0, size_t len = npos);
	2.iterator erase(const_iterator p);
	3.iterator erase(const_iterator first, const_iterator last);

string::find
	1.size_t find(const string& str, size_t pos = 0) const noexcept;
	2.size_t find(const char* s, size_t pos = 0) const;
	3.size_t find(const char* s, size_t pos, size_type n) const;
	4.size_t find(char c, size_t pos = 0) const noexcept;


string::find_first_not_of
	1.size_t find_first_not_of(const string& str, size_t pos = 0) const noexcept;
	2.size_t find_first_not_of(const char* s, size_t pos = 0) const;
	3.size_t find_first_not_of(const char* s, size_t pos, size_t n) const;
	4.size_t find_first_not_of(char c, size_t pos = 0) const noexcept;


string::find_first_of
	1.size_t find_first_of(const string& str, size_t pos = 0) const noexcept;
	2.size_t find_first_of(const char* s, size_t pos = 0) const;
	3.size_t find_first_of(const char* s, size_t pos, size_t n) const;
	4.size_t find_first_of(char c, size_t pos = 0) const noexcept;

	函数原型:string::find_last_not_of
		1.size_t find_last_not_of(const string& str, size_t pos = npos) const noexcept;
		2.size_t find_last_not_of(const char* s, size_t pos = npos)const;
		3.size_t find_last_not_of(const char* s, size_t pos, size_t n) const;
		4.size_t find_last_not_of(char c,size_t pos = npos) const noexcept;
 		int find_first_of(char c, int start = 0):
       功能:查找字符串中第1个出现的c,由位置start开始。 如果有匹配，则返回匹配位置；否则，返回-1.默认情况下，start为0，函数搜索整个字符串。


	函数原型:string::find_last_of
		1.size_t find_last_of(const string& str, size_t pos = npos) const noexcept;
		2.size_t find_last_of(const char* s, size_t pos = npos) const;
		3.size_t find_last_of(const char* s, size_t pos, size_t n) const;
		4.size_t find_last_of(char c, size_t pos = npos) const noexcept;
	  int find_last_of(char c);
 	功能:查找字符串中最后一个出现的c。有匹配，则返回匹配位置；否则返回-1.该搜索在字符末尾查找匹配，所以没有提供起始位置。
	



string::front
string::get_allocator
string::insert
string::length
string::max_size
string::operator+=
string::operator=
string::operator[]
string::pop_back
string::push_back
string::rbegin
string::rend
string::replace
string::reserve
string::resize
string::rfind
string::shrink_to_fit
string::size
string::substr
string::swap



