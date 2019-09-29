# string
## member functions
	构造函数函数原型：
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
	构造函数功能：
		Construct string object 
		Construct string object, initializing its value depending on the constructor version used:
			(1)empty string constructor(default constructor)
				Constructs an empty string, with a length of zero characters.
			(2)copy constructor
				Constructs a copy of str.
			(3)substring constructor
				Copies the portion of str that begins at the character position pos spans len characters(or until the end of str, if either str is too short or if len is string::npos)
			(4)from c-string
				Copies the null-terminated character sequence(C-string) pointed by s.
			(5)from buffer
				Copies the first n characters from the array of characters pointed by s.
			(6)fill constructor
				Fills the string with n consecutive copies of character c.
			(7)range constructor
				Copies the sequence of characters int the range [first, last), int the same order.
			(8)initializer list
				Copies each of the characters in il,int the same order.
			(9)move constructor
				Acquires the contents of str.str is left in an unspecified but valid state.
	构造函数参数：
		Parameters
			str - Another string object,whose value is either copy or acquired.
			pos - Position of the first character in str that is copied to the object as a substring.If that is greater than str's length, it throws out_of_range.Note:The frist character in str is denoted by a value of 0(not 1).
			len - Length of the substring to be copied(if the string is shorter, as many characters ass possible are copied).A value of string::npos indicates all characters until the end of str.
			s - Pointer to an array of characters(such as a c-string).
			n - Number of characters to copy.
			c - Character to fill the string with.Each of the n characters in the string will be initialized to a copy of this value.
			frist,last - Input iterators to the initial and final positions in a range. The range used is [first, last),which includes all the characters between first and last, including the character pointed by first but not the character pointed by last.The function template argument InputIterator shall be an input iterator type that points to elements of a type convertible to char.
			il - An initializer_list object.These objects are automatically constructed fromt initializer list declarators.

	析构函数：
		3.string::~string
			~string();
	析构函数功能：
			destroys the string object.
		4.string::operator=
			1.C++98
				string(1) string& operator=(const string &str);
				c-string(2) string& operator=(const char *s);
				character(3) string& operator=(char c);
			2.C++11
				initialer list(4) string& operator=(initializer_list<char> il);
				move(5) string& operator=(string && str) noexcept;
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



