/*************************************************************************
    > File Name: Pro4.8.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

template<>
class packaged_task<std::string(std::vector<char>*, int)>
{
	public:
		tempalte<typename Callable>
			explicit packaged_task(Callable&& f);
		std::future<std::string> get_future();
		void operator()(std::vector<char>*, int);
};

int main(void)
{
	return 0;
}
