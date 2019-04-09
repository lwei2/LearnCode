/*************************************************************************
    > File Name: SingletonA.h
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#ifndef __SINGLETONA_H__
#define __SINGLETONA_H__

#include <iostream>
#include "Singleton.h"

using namespace std;


class SingletonA : public Singleton
{
	friend class Singleton;
  public:
	void Show()
	{
		cout<<"SingletonA"<<endl;
	}
  private:
	SingletonA()
	{

	}
};

#endif //__SINGLETONA_H__
