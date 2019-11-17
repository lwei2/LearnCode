/*************************************************************************
    > File Name: 12-6.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <string>

using namespace std;

class Expt
{
	public:
		Expt()
		{
			
		}
		Expt(string EStr);
		const string showReason() const;
	private:
		string ExptStr;
};
Expt::Expt(string EStr)
{
	ExptStr = EStr;
}
const string Expt::showReason() const
{
	return ExptStr;
}
double divde(int acount, int total) throw(Expt)
{
	if(acount == 0)
		throw Expt("failed to div");
	return ((double)total/acount);
}

int main(void)
{
	cout<<"...main start..."<<endl;
	int count;
	double total, avgprice;
	try
	{
		cout<<"count:"<<count<<endl;
		cout<<"total:"<<total<<endl;
		avgprice = divde(count, total);
	}
	catch(Expt E)
	{
		cout<<"Expt:"<<endl;
			cout<<E.showReason()<<endl;
		exit(1);
	}
	catch(char *str)
	{
		cout<<str<<endl;
	}

		cout<<"... return main..."<<endl;
		cout<<"total="<<total<<",count="<<count<<",avgprice="<<avgprice<<endl;

	return 0;
}
