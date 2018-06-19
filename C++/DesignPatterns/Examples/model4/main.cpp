/*************************************************************************
    > File Name: main.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include "Singleton.h"
int main(void)
{
  	Singleton *st = Singleton::GetInstance("SingletonA");
	st->Show();
	return 0;
}
