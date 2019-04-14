/*************************************************************************
    > File Name: Subject.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include "Subject.h"

void ConcreteSubject::Attach(Observer *pObserver)
{
	m_ObserverList.push_back(pObserver);
}

void ConcreteSubject::Detach(Observer *pObserver)
{
	m_ObserverList.remove(pObserver);
}

void ConcreteSubject::Notify()
{
	std::list<Observer *>::iterator it = m_ObserverList.begin();
	while(it!=m_ObserverList.end())
	{
		(*it)->Update(m_iState);
		++it;
	}
}
