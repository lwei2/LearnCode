/*************************************************************************
    > File Name: Lambda_0011.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


template <typename T>
void negate_all(vector<T> & v)
{
	for_each(v.begin(), v.end(), [](T& n){
			n = -n;
			});
}
template<typename T>
void print_all(const vector<T>& v)
{
	for_each(v.begin(), v.end(), [](const T& n){
			cout<<n<<endl;
			});
}

int main(void)
{
	vector<int> v;
	v.push_back(34);
	v.push_back(-43);
	v.push_back(56);
	print_all(v);
	negate_all(v);
	cout<<"after negate_all:"<<endl;
	print_all(v);
	return 0;
}
