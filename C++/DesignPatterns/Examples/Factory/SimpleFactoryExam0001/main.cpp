/*************************************************************************
    > File Name: main.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include "SimpleFactory.h"

using namespace std;


int main(int argc, char *argv[])
{

	AbstractFactory *objF = new SimpleFactory();
	AbstractProduct *objP = objF->CreateProduct(1);
	objP->Operation();
	delete objP;
	objP = NULL;


	objP = objF->CreateProduct(2);
	objP->Operation();
	delete objP;
	objP = NULL;
	
	return 0;
}
