/*************************************************************************
    > File Name: thread_0011.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <thread>

using namespace std;

class Task
{
	public:
		void Start()
		{
			th = std::thread([&]{
					this->Run();
					});
		}
		void Join()
		{
			th.join();
		}
		virtual void Run() = 0;
	private:
		std::thread th;
};

class Task1 : public Task
{
	void Run() override
	{
		cout<<"I am Job#1"<<endl;
	}
};


class Task2 : public Task
{
	void Run() override
	{
		cout<<"I am Job#2"<<endl;
	}
};

int main(void)
{
	Task1 t1;
	Task2 t2;
	t1.Start();
	t2.Start();
	t1.Join();
	t2.Join();
	return 0;
}
