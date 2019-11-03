/*************************************************************************
    > File Name: Pro4.7.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <mutex>
#include <string>
#include <future>

using namespace std;

struct X
{
	void foo(int , std::string const &);
	std::string bar(std::string const &);
};

X x;
auto f1 = std::async(&X::foo,&x, 42, "hello");
auto f2 = std::async(&X::bar, x,"goodbye");

struct Y
{
	double operator()(double);
};

Y y;
auto f3 = std::async(Y(), 3.141);
auto f4 = std::async(std::ref(y),2.718);

X baz(X&);

auto f6 =std::async(baz, std::ref(x));

class move_only
{
	public:
		move_only();
		move_only(move_only &&);
		move_only(move_only const&) = delete;
		move_only& operator=(move_only &&);
		move_only& operator=(move_only const&) = delete;
		void operator()();
};

auto f5 = std::async(move_only());

int main(void)
{
	return 0;
}
