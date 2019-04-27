/*************************************************************************
    > File Name: Singleton.h
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#ifndef __SINGLETON_H__
#define __SINGLETON_H__

#include<iostream>

using namespace std;

class Singleton
{
	public:
		static Singleton * instance();
	protected:
		Singleton()
		{
			
		}
	private:
		static Singleton *p;
};

#endif //__SINGLETON_H__
