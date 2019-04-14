
#ifndef _OBSERVER_H_
#define _OBSERVER_H_

#include <iostream>
#include "Subject.h"

using namespace std;

class Subject;


class Observer
{
	public:
		virtual void Update(int) = 0;
};

class ConcreteObserver1 : public Observer
{
	public:
		ConcreteObserver1(Subject *pSubject);
		void Update(int value);
	private:
		Subject *m_pSubject;
};

class ConcreteObserver2 : public Observer
{
	public:
		ConcreteObserver2(Subject *pSubject);
		void Update(int value);
	private:
		Subject *m_pSubject;
};


#endif
