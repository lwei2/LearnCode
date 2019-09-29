/*************************************************************************
    > File Name: Lambda_0008.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

int main(void)
{
	list<int> numbers;
	numbers.push_back(13);
	numbers.push_back(17);
	numbers.push_back(42);
	numbers.push_back(46);
	numbers.push_back(99);
	const list<int>::const_iterator result = find_if(numbers.begin(), numbers.end(), [](int n){
			return (n%2) == 0;
			});
	if(result != numbers.end())
		cout<<"The first event number in the list is "<<*result<<"."<<endl;
	else
		cout<<"The list contains no event numbers."<<endl;

	return 0;
}
