/*************************************************************************
    > File Name: EncodingDecoding.h
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#ifndef _ENCODING_DECODING_H_
#define _ENCODING_DECODING_H_


char from_hex(char ch)
{
	return isdigit(ch) ? ch - '0' : tolower(ch) - 'a' + 10;
}

char to_hex(char code)
{
	static char hex[] = "0123456789abcdef";
	return hex[code&15];
}

char *url_encode(char *str)
{
	char *pstr = str;
	char *buf = malloc(strlen(str)*3+1),*pbuf = buf;
	while(*pstr)
	{
		if(isalnum(*pstr) || *pstr == '-' || *pstr == '_' || *pstr == '.' || *pstr == "~")
			*pbuf++ = *pstr;
		else if(*pstr == ' ')
			*pbuf++ = '+';
		else
			*pbuf++ = '%', *pbuf++ = to_hex(*pstr>>4), *pbuf++=to_hex(*pstr&15);
		pstr++;
	}
	return buf;
}

char *url_decode(char *str)
{
	char *pstr = str, *buf = malloc(strlen(str)+1),*pbuf = buf;
	while(*pstr)
	{
		if(*pstr == '%')
		{
			if(pstr[1] && pstr[2])
			{
				*pbuf++ = from_hex(pstr[1])<<4 | from_hex(pstr[2]);
				pstr+=2;
			}			
		}
		else if(*pstr == '+')
			*pbuf++ = ' ';
		else
			*pbuf++ = *pstr;
	}
	*pbuf = '\0';
	return buf;
}

#endif//_ENCODING_DECODING_H_
