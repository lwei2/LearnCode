/*************************************************************************
    > File Name: main.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include "Observer.h"
#include "Subject.h"

using namespace std;


int main(void)
{
	ConcreteSubject *pSubject = new ConcreteSubject();
	
	Observer *pObserver1 = new ConcreteObserver1(pSubject);
	Observer *pObserver2 = new ConcreteObserver2(pSubject);

	pSubject->SetState(2);

	pSubject->Attach(pObserver1);
	pSubject->Attach(pObserver2);
	pSubject->Notify();

	pSubject->Detach(pObserver1);
	pSubject->SetState(3);
	pSubject->Notify();

	delete pObserver1;
	delete pObserver2;
	delete pSubject;

	return 0;
}
