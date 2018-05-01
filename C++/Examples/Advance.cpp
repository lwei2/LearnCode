/*************************************************************************
    > File Name: iter.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include<iostream>
#include<string>
#include<iterator>
#include<algorithm>

using namespace std;

int main(void)
{
  	istream_iterator<string> cinPos(cin);
	ostream_iterator<string> coutPos(cout, " ");
	while(cinPos != istream_iterator<string>())
	{
		advance(cinPos, 2);
		if(cinPos!=istream_iterator<string>())
		{
			*coutPos++=*cinPos++;
		}
	}
	cout<<endl;
	return 0;
}
