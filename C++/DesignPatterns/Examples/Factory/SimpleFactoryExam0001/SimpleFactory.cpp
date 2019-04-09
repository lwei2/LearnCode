/*************************************************************************
    > File Name: SimpleFactory.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/




#include <iostream>
#include "SimpleFactory.h"
#include "AbstractProduct.h"

using namespace std;

AbstractFactory::AbstractFactory()
{
	
}
AbstractFactory::~AbstractFactory()
{

}
SimpleFactory::SimpleFactory()
{

}
SimpleFactory::~SimpleFactory()
{

}

AbstractProduct * SimpleFactory::CreateProduct(int type)
{
	AbstractProduct *tmp = NULL;
	switch(type)
	{
		case 1:
			tmp = new ProductA();
			break;
		case 2:
			tmp = new ProductB();
			break;
	}
	return tmp;
}
