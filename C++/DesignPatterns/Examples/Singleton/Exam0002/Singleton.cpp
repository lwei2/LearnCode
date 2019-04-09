/*************************************************************************
    > File Name: Singleton.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include "Singleton.h"

Singleton *Singleton::p = nullptr;

Singleton* Singleton::instance()
{
	if(nullptr == p)
		p = new Singleton();
	return p;
}
