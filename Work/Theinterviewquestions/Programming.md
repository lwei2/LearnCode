编程题
===========================
	1.9*9乘法口诀
1.9*9乘法口诀
```c
	int i,j;
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d*%d=%-3d",i,j,i*j);
		}
		printf("\n");	
	}
```
2.
int strlen(const char *src)
{
#ifdef
	int len = 0;
	assert(src!=NULL);
	while(*src++!='\0')
		len++;
	return len;
#else
	if(*src == '\0')
		return 0;
	else
		return (1+strlen(++src));
#endif
}
char *strcpy(char *dest, char *src);

写出String的构造函数，拷贝构造函数，赋值函数以及析构函数。
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

3.某个字符串的逆序
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
4.
template<class T>
class Array
{
    public:
        ~Array();
        Array(int);
        T& operator[](int);
        Array& operator=(Array<T>&);
        friend ostream& operator<<(ostream&, Array&);
        friend istream& operator>>(istream&, Array&);
    private:
        T * array;
        int size;
};
template<class T>
Array<T>::Array(int len)
{
    array = new T[len];
    size = len;
}
template<class T>
Array<T>::~Array()
{
    delete[]array;
    size = 0;
}
template<class T>
Array<T>& Array<T>::operator=(Array<T>& b)
{
    if(size!=b.size)
    {
        cout<<"can't not equal"<<endl;
        abort();
    }
    for(int i = 0; i < size(); i++)
        array[i] = b.array[i];
    return *this;
}
template<class T>
T& Array<T>::operator[](int len)
{
    if(len<0||len>size)
    {
        abort();
    }
    return array[len];
}
template<class T>
ostream& operator<<(ostream& out, Array<T>& a)
{
    cout<<"The all number is:"<<endl;
    for(int i = 0; i < a.size;i++)
    {
        cout<<a.array[i]<<endl;
    }
    return out;
}
template<class T>
istream& operator>>(istream& in, Array<T>& a)
{
    for(int i = 0; i < a.size; i++)
    {
        cout<<"input the"<<(i+1)<<" number"<<endl;
        in>>a.array[i];
    }
}




