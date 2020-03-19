/*************************************************************************
    > File Name: stack4test.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <string>
#include <cstdlib>
#include "stack4.hpp"

using namespace std;

int main(void)
{
	try{
		Stack<int, 20> int20Stack;
		Stack<int, 40> int40Stack;
		Stack<string, 40> stringStack;

		int20Stack.push(7);
		cout<<int20Stack.top()<<endl;
		int20Stack.pop();
		stringStack.push("hello");
		cout<<stringStack.top()<<endl;
		stringStack.pop();
		stringStack.pop();
	}catch(std::exception const &ex){
		cerr<"Exception:"<<ex.what()<<endl;
		return EXIT_FAILURE;
	}
}
