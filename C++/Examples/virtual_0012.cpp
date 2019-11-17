/*************************************************************************
    > File Name: virtual_0012.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;


class CParent
{
	public:
		virtual void Intro()
		{
			cout<<"I'm  a Parent, ";
			Hobby();
		}
		virtual void Hobby()
		{
			cout<<"I like football!";
		}
};

class CChild : public CParent
{
	public:
		virtual void Intro()
		{
			cout<<"I'm a Child, ";
			Hobby();
		}
		virtual void Hobby()
		{
			cout<<"I like bastketball!\n";
		}
};
int main(void)
{
	CChild *pChild = new CChild();
	CParent *pParent = (CParent*)pChild;
	pParent->Intro();
	return 0;
}
