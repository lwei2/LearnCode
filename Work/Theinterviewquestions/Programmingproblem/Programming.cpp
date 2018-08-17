1.写出String的构造函数，拷贝构造函数，赋值函数以及析构函数。
class String
{
	public:
		String(const char *str = NULL);
		String(const String &other);
		String &operator=(const String &other);
		~String();
	private:
		char *m_data;
};
String::String(const char *str)
{
	if(str == NULL)
	{
		m_data = new char[1];
		*m_data = '\0';
	}
	else
	{
		m_data = new char[strlen(str) + 1];
		strcpy(m_data,str);
	}
}
String::String(const String &other)
{
	m_data=new char[strlen(other.m_data)+1];
	strcpy(m_data,other.m_data);
}
String &String ::operator=(const String &other)
{
	if(this==&other)
		return *this;
	delete []m_data;
	m_data=new char[strlen(other.m_data)+1];
	strcpy(m_data,other.m_data);
	return *this;
}
String::~String()
{
	delete[]m_data;
}

2.某个字符串的逆序
#ifdef
char *reverse(char* str)
{
    char *t = str;
    while(*t++)
        t-=2;
    char *s = new char[sizeof(char)*(q-s+2)];
    char *r = s;
    while(t>=s)
        *p++=*t--;
    *p = '\0';
    return r;
}
#elif
char *reverse(char *str)
{
    char *p=s;
    char *q=s;
    while(*q)
        ++q;
    q--;
    while(q>p)
    {
        char t =*p;
        *p++=*q;
        *q--=t;
    }
    return s;
}
#else
void reverse(char *str)
{
    for(int i =0; i < strlen(str)/2；i++)
    {
        char temp = str[i];
        str[i]=str[n-i-1];
        str[n-i-1]=temp;
    }
}
#endif



