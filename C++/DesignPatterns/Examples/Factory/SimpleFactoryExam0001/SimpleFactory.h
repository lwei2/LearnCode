/*************************************************************************
    > File Name: SimpleFactory.h
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#ifndef __SIMPLEFACTORY_H_
#define __SIMPLEFACTORY_H_

#include <iostream>
#include <stdio.h>
#include "AbstractProduct.h"

using namespace std;


class AbstractFactory
{
	public:
		AbstractFactory();
		virtual AbstractProduct *CreateProduct(int type) = 0;
		virtual ~AbstractFactory();
};

class SimpleFactory: public AbstractFactory
{
	public:
		SimpleFactory();
		AbstractProduct *CreateProduct(int type);
		~SimpleFactory();
};

#endif//__SIMPLEFACTORY_H_
