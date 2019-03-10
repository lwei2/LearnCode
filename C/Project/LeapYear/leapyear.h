/*************************************************************************
    > File Name: leapyear.h
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <stdio.h>

#ifndef __LEAPYEAR_H_
#define __LEAPYEAR_H_

int isLeapYear(int year)
{
	return (year%4==0&&year%100!=0||year%400==0);
}


#endif//
