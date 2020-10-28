#string
	1.strlen
	2.strcpy
	3.strncpy
	4.strcat
	5.strcmp
	6.strncmp
	7.memcmp
	8.memcpy
	9.memmove
	10.memset
	11.strtok

##strlen
	1.函数原型:exntern size_t strlen(const char *str)
	    功能:计算给定字符串的长度，不包括'\0'。
	    参数:str-给定字符串
	    返回值:size_t,即unsigned int。 
	2.函数的实现:
	#ifdef
	  int strlen(char *src)
	  {
	    assert(src!=NULL);
	    int len=0;
	    while((*src++)!='\0')
	          len++;
	    return len;
	   }
	#elif
	    int strlen(char *src)
	    {
	      if(src=='\0')
	          return 0;
	      else
	          return (1+strlen(++src));
	    }
	#else
		return *src ? strlen(src+1)+1:0;
	#endif

##strcpy
		1.函数原型:
		    char *strcpy(char *dest,char *src)
		        功能:把从src地址开始且含有'\0'结束字符的字符串拷贝到以dest开始的地址空间。
		        参数:dest-目的字符串,src-源字符串
		        返回值:char *。
		2.函数的实现
			#if
			char *strcpy(char *dest,const char *src)
			{
				char *t = dest;
				assert(dest!=NULL&&src!=NULL);
				while((*t++=*src++)!='\0')
				  ;
				return dest;
			}
			#elif
			char *strcpy(char *dest,const char *src)
			{
			    assert(src!=NULL&&dest!=NULL);
			    int i = 0;
			    while('\0'!=src[i])
			    {
			        dest[i] = src[i];
			        i++;
			    }
			    dest[i]='\0';
			    return dest;
			}
			#else
			char *strcpy(char *dest,const char *src)
			{
				char *cp = dest;
				while(*cp++=*src++)
				  ;
				return dest;
			}
			#endif

##strncpy
	1.函数原型:
	    char *strncpy(char *dest,char *src,size_t n)
	        功能:把从src所指向的字符串中以src地址开始的前n个字节复制到以dest开始的地址空间（或所指向的数组中）并返回被赋值后的dest。
	        参数:dest-目的字符串,src-源字符串,n-前n个字节
	        返回值:char *。
	
	2.函数的实现
	char *strncpy(char *dest,const char *src,size_t n)
	{
		char *t=dest;
		assert(dest!=NULL&&src!=NULL&&n>0);
		int i=0;
		while(i++<n&&(*dest++=*src++)!='\0')
			;
		if(*t!='\0')
			*t='\0'
		return dest;
	}

##strcat
	1.函数原型:extern char *strcat(char *dest,const char *src);
	    功能:将src所指向字符串(包括'\0')复制到dest所指向的字符串后面(删除*dest原来尾末的'\0')。
	    参数:dest-指向目标数组或字符串
	         src-指向要追加的字符串
	    返回值:char *,返回一个指向最终目标字符串的指针。
	2.函数的实现:
	char *strcat(char *dest,char *src)
	{
		char *t =dest;
		assert(dest!=NULL&&src!=NULL);
		while(*dest)
			*dest++;
		while((*dest++=*src++)!='\0')
			;
		return t;
	}

##strcmp
	1.函数原型:extern int strcmp(const char *str1, const char *str2)
	    功能:比较两个字符串
	    参数:str1-比较字符串1，str2-比较字符串2
	    返回值:当str1 == str2 ,返回0；当str1>str2,返回正数；当str1<str2,返回负数
	2.函数的实现
		#define
		int strcmp(const char *str1,const char *str2)
		{
			while(*str1==*str2)
			{
				if(*str1=='\0')
					return 0;
				str1++;
				str2++;
			}
			return *str1-*str2;
		}
		#else
		int strcmp(const char *str1, const char *str2)
		{
		    assert(str1!=NULL&&str2!=NULL);
		    int result = 0;
		    while(!(result=*(unsigned char *)str1 - *(unsigned char*)str2)&& *str2)
		    {
		        str1++;
		        str2++;
		    }
		    return result;
		}
		#endif

##strncmp
	1.函数原型:extern int strncmp(const char *str1, const char *str2,size_t n);
	    功能:比较两个字符串
	    参数:str1-比较字符串1，str2-比较字符串2,n-要比较的字符数
	    返回值:当str1与str2的前n个字符相同，则返回0；
	           当str1>str2,返回正数；
	           当str1<str2,返回负数。
	2.函数的实现 
	int strncmp(const char *str1,const char *str2,size_t n)
	{
	    assert(str1!=NULL&&str2!=NULL&&n>0);
	    if(n==0)
	        return 0;
	    while(n--&&(*str1==*str2)&&*str2)
	    {
	        str1++;
	        str2++;
	    }
	    return *(unsigned char*)str1 - *(unsigned char*)str2;
	}

##memcmp
	1.函数原型:exntern int memcmp(const void *str1,const void *str2, size_t n)
	    功能:比较存储区str1和存储区str2的前n个字节
	    参数:str1-指向内存块的指针
	         str2-指向内存块的指针
	         n-要被比较的字节数
	    返回值:int,若返回值<0,则表示str1小于str2,若返回值>0,则表示str1大于str2,若返回值=0,则表示str1等于str2.
	2.函数的实现:
	#define 
	int memcmp(const void *str1,const void *str2,size_t n)
	{
	    const char *s1=str1;
	    const char *s2=str2;
	    int ret=0;
	    assert(str1!=NULL&&str2!=NULL&&n>0);
	    while(n-->0)
	    {
	        if(*s1>*s2)
	        {
	            ret=1;
	            break;
	        }
	        if(*s2>*s1)
	        {
	            ret=-1;
	            break;
	        }
	        s1++;
	        s2++;
	    }
	    return ret;
	}
	#else
	int memcmp(const void *str1, const void *str2, size_t n)
	{
	    if(!n)
	        return 0;
	    while(n--&& *((char*)str1) == *((char*)str2))
	    {
	        str1 = (char*)str1+1;
	        str2 = (char*)str2+1;
	    }
	    return *(char*)str1-*(char*)str2;
	}
	#endif

##memcpy
	1.函数原型:void *memcpy(void *dest, const void *src, size_t n)
	    功能:从源src所指的内存地址的起始位置开始拷贝n个字节到目标dest所指的内存地址的起始位置中。
	    参数:dest-指向用于存储复制内容的目标数组，类型强制转换为 void* 指针.
	         src-指向要复制的数据源，类型强制转换为 void* 指针.
	         n-要被复制的字节数.
	    返回值:一个指向目标存储区dest的指针。 
	2.函数的实现:
	#ifndef
	void *memcpy(void *dest,const void *src,size_t n)
	{
	    char *d=(char *)dest;
	    const char *s=(const char *)src;
	    assert(dest!=NULL&&src!=NULL&&n>0);
	    assert(dest>=src+n||src>dest+n);
	    if(dest==src)
	        return src;
	    while(n-->0)
	    {
	        *d++=*s++;
	    }
	    return dest;
	}
	#else
	#endif

##memmove
	1.函数原型:
	    void *memmove(void *dest,const void *src,size_t count);
	    功能:由src所指内存区域复制count个字节到dest所指内存区域.
	    参数: src  -指向源内存指针
	          dest -指向目标内存指针
	          count - 复制count个字节
	    返回值:void * 。 
	2.函数的实现:
		#ifdef
		void *memmove(void *dest, const void *src,size_t count)
		{
		    void *ret = dest;
		    if(dest <= src || (char *)dest >= ((char*)src + count))
		    {
		        while(count--)
		        {
		            *(char *)dest = *(char *)src;
		            dest = (char *)dest + 1;
		            src = (char *)src + 1;
		        }
		    }
		    else
		    {
		        dest = (char *)dest + count - 1;
		        src = (char *)src + count - 1;
		        while(count--)
		        {
		            *(char *)dest = *(char *)src;
		            dest = (char *)dest - 1;
		            src = (char *)src - 1;
		        }
		    }
		    return ret;
		}
		#else
		#endif

##memset
	1.函数原型:extern void *memset(void *ptr, int value, size_t num);
	    功能:将src所指向的某一块内存中的每个字节的内容全部设置为value指定的ASCII值。
	    参数:ptr-开辟的内存空间ptr或指向要填充的内存块的指针
	         value-将ptr所指向的空间的num个字节设置的值
	         num-要设置为该值的字节数,size_t为无符号整数类型
	    返回值:void *
	2.函数的实现:
	void *memset(void *src,int value,size_t n)
	{
	    char *t=(char *)src;
	    assert(src!=NULL&&n>0);
	    while(n-->0)
	    {
	        *t++=value;
	    }
	    return src;
	}

##strdup

##strchr
	1.函数原型：char *strchr(const char *str, int c);
		头文件：#include <string.h>
		功能：在参数str所指向的字符串中搜索第一次出现字符c（一个无符号字符）的位置。
		参数：str - 要被检索的 C 字符串
			  c - 在 str 中要搜索的字符	
		返回值：返回一个指向该字符串中第一次出现的字符的指针，如果字符串中不包含该字符则返回NULL空指针。
		char *strchr(char *str, int c)
		{
			char *s = str;
			while(*s != '\0' && *s != c)
			{
				++s;			
			}
			return *s == c ? s : NULL;
		}

##strtok
	1.函数原型:char *strtok(char *s, const char *delim);
	    功能:
	    参数:
	    返回值:char *
	2.函数的实现:
	    char *strtok(char *s, const char *delim)
	    {
	
	    }

##bzero
	1.函数原型:
	        extern void bzero(void *src, int n);
	        功能:置字节字符串s的前n个字节为零且包括‘\0’。
	        参数:src 要置零的数据的起始地址； n 要置零的数据字节个数。
	        返回值:void 。
	2.函数的实现

##tolower
	1.函数原型:
	        extern int tolower(int c);
	        功能: 把字符转换成小写
	        参数:
				c-
	        返回值:int。
	2.函数的实现
			int tolower(int c)
			{
				return (c >= 'A' && c <= 'Z') ? (c - 'A' + 'a'):c;
			}

























