/*************************************************************************
    > File Name: Singleton.h
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#ifndef __SINGLETON_H__
#define __SINGLETON_H__ 

#include <iostream>
#include <string.h>

using namespace std;

class Singleton
{
	public:
	  	static Singleton *GetInstance(const char *name);
		virtual void Show(){cout<<"Singleton"<<endl;};
	protected:
		Singleton(){};
	private:
		static Singleton *singleton;
};

#endif//__SINGLETON_H__
