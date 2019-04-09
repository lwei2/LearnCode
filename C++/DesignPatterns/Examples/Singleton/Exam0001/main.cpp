/*************************************************************************
    > File Name: main.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include "Singleton.h"
#include "SingletonA.h"
#include "SingletonB.h"

using namespace std;


int main(void)
{
  	Singleton *st = Singleton::GetInstance("Singleton");
	st->Show();
	return 0;
}
