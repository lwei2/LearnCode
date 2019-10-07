String
1)strcpy
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