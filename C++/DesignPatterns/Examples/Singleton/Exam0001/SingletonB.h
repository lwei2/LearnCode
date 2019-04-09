/*************************************************************************
    > File Name: SingletonB.h
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#ifndef __SINGLETONB_H__
#define __SINGLETONB_H__


#include "Singleton.h"
#include <iostream>

using namespace std;


class SingletonB:public Singleton
{
	friend class Singleton;
  public:
	void Show()
	{
		cout<<"SingletonB"<<endl;
	}
  private:
	SingletonB(){};

};

#endif // __SINGLETONB_H__
