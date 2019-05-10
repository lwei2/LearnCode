/*************************************************************************
    > File Name: fprintf_0000.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

#define LOG(...) { \
	fprintf(stderr, "%s : Line: %d:\t", __FILE__, __LINE__); \
	fprintf(stderr, __VA_ARGS__);\
	fprintf(stderr, "\n"); \
}

int main(void)
{
	LOG("%s", "No Err!");
	return 0;
}
