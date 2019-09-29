/*************************************************************************
    > File Name: Lambda_0010.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


class Scale
{
	public:
		explicit Scale(int scale):_scale(scale)
		{

		}
		void AppleScale(const vector<int>& v)const 
		{
			for_each(v.begin(), v.end(), [=](int n){
					cout<<n*_scale<<endl;
					});
		}
	private:
		int _scale;
};

int main(void)
{
	vector<int> values;
	values.push_back(1);
	values.push_back(2);
	values.push_back(3);
	values.push_back(4);

	Scale s(3);
	s.AppleScale(values);

	return 0;
}
