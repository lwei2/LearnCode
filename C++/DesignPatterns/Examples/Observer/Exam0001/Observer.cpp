
#include "Observer.h"
#include "Subject.h"

ConcreteObserver1::ConcreteObserver1(Subject *pSubject):m_pSubject(pSubject)
{

}

ConcreteObserver2::ConcreteObserver2(Subject *pSubject):m_pSubject(pSubject)
{

}
void ConcreteObserver1::Update(int value)
{
	cout<<"ConcreteObserver1 get the update. New State:"<<value<<endl;
}

void ConcreteObserver2::Update(int value)
{
	cout<<"ConcreteObserver2 get the update. New State:"<<value<<endl;
}
