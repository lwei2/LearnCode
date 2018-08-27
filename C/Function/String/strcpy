#if
char *strcpy(char *dest,const char *src)
{
	char *t = dest;
	assert(dest!=NULL&&src!=NULL);
	while((*dest++=*src++)!='\0')
	  ;
	return t;
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
