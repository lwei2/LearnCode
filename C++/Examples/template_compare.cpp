/*************************************************************************
    > File Name: template_demo.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include<iostream>

using namespace std;
template<class T>
class Data
{
	public:
	  Data()
	  {
		m = 0;
		n = 0;
	  }
	  void getMin(T m, T n);
	private:
	  T m;
	  T n;

};
template<class T>
void Data<T>::getMin(T m, T n)
{
	if(m>n)
	  cout<<"min:"<<n<<endl;
	else
	  cout<<"min:"<<m<<endl;
}
int main(void)
{
	Data<int> a;
	a.getMin(10,20);

	return 0;
}

