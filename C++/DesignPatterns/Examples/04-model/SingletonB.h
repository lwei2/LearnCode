/*************************************************************************
    > File Name: SingletonB.h
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/
#include "Singleton.h"
class SingletonB:public Singleton
{
	friend classs Singleton;
  public:
	void Show()
	{
		cout<<"SingletonB"<<endl;
	}
  private:
	SingletonB(){};

};

