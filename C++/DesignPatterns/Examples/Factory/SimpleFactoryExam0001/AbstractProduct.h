/*************************************************************************
    > File Name: AbstractProduct.h
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#ifndef __ABSTRACTPRODUCT_H_
#define __ABSTRACTPRODUCT_H_

#include <iostream>
#include <stdio.h>


using namespace std;

class AbstractProduct
{
	public:
		AbstractProduct();
		virtual void Operation() = 0;
		virtual ~AbstractProduct();
};

class ProductA : public AbstractProduct
{
	public:
		ProductA();
		void Operation();
		virtual ~ProductA();
};

class ProductB : public AbstractProduct
{
	public:
		ProductB();
		void Operation();
		virtual ~ProductB();
};

#endif
