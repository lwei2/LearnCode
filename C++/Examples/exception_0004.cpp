#include <iostream>
#include <exception>
#include <string>
using namespace std;

class Exception : public exception
{
	public:
		Exception(int errId = 0, const char *errMsg = ""):_errId(errId), _errMsg(errMsg)
		{

		}
		virtual const char *what() const throw()
		{
			cout<<"errId:"<<_errId<<endl;
			cout<<"errMsg:"<<_errMsg.c_str()<<endl;
			return _errMsg.c_str();
		}
	private:
		int _errId;
		string _errMsg;
};


void TestException()
{
	throw Exception(1,"the number is wrong");
}
int main(void)
{
	try{
		TestException();
	}catch(Exception &e)
	{
		e.what();
	}
	return 0;
}
