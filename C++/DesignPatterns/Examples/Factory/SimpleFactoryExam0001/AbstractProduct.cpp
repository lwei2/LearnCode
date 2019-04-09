/*************************************************************************
    > File Name: AbstractProduct.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include "AbstractProduct.h"

AbstractProduct::AbstractProduct()
{

}
AbstractProduct::~AbstractProduct()
{

}

ProductA::ProductA()
{

}

ProductA::~ProductA()
{

}

void ProductA::Operation()
{
	fprintf(stderr, "ProductA operation!\n");
}


ProductB::ProductB()
{

}
ProductB::~ProductB()
{

}

void ProductB::Operation()
{
	fprintf(stderr, "ProductB operation!\n");
}
