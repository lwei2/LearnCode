
#ifndef _SUBJECT_H_
#define _SUBJECT_H_

#include <iostream>
#include "Observer.h"
#include <list>

using namespace std;

class Observer;

class Subject 
{
	public:
		virtual void Attach(Observer *) = 0;
		virtual void Detach(Observer *) = 0;
		virtual void Notify() = 0;
};

class ConcreteSubject : public Subject
{
	public:
		void Attach(Observer *pObserver);
		void Detach(Observer *pObserver);
		void Notify();
		void SetState(int state)
		{
			m_iState = state;
		}
	private:
		std::list<Observer *>m_ObserverList;
		int m_iState;
};

#endif
