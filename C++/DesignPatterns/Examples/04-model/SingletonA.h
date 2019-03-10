/*************************************************************************
    > File Name: SingletonA.h
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/
#include "Singleton.h"
class SingletonA:public Singleton
{
	friend classs Singleton;
  public:
	void Show()
	{
		cout<<"SingletonA"<<endl;
	}
  private:
	SingletonA(){};

};

