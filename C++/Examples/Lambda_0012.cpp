/*************************************************************************
    > File Name: Lambda_0012.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	vector<int> elements(3);
	vector<int> indices(3);
	indices[0] = 0;
	indices[1] = -1;
	indices[2] = 2;
	try{
		for_each(indices.begin(), indices.end(), [&](int index){
				elements.at(index) = index;
				});
	}catch(const out_of_range& e){
		cerr<<"Caught "<<e.what()<<"."<<endl;
	};
}
