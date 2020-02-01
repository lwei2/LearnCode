/*************************************************************************
    > File Name: url.h
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#ifndef _URL_H_
#define _URL_H_

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define BURSIZE 480000

int hex2dec(char c);
char dec2hex(short int c);
void urlencode(char url[]);
void urldecode(char url[]);


#endif//_URL_H_
