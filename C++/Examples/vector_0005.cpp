/*************************************************************************
    > File Name: vector_0005.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

class MyVector
{
	private:
		int *data;
		int capacity;
		int _size;
		void resize(int st)
		{
			int *newData = new int[st];
			for(int i = 0; i < _size; i++)
				newData[i] = data[i];
			delete[]data;
			data = newData;
			capacity = st;
		}
	public:
		MyVector()
		{
			data = new int[10];
			capacity = 10;
			_size = 0;
		}
		~MyVector()
		{
			delete[]data;
		}
		MyVector(int st)
		{
			data = new int[st*2];
			capacity = st*2;
			_size = st;
		}
		void push_back(int e)
		{
			if(_size == capacity)
				resize(2*capacity);
			data[_size++] = e;
		}
		int pop_back()
		{
			int tmp = data[_size];
			_size--;
			if(_size == capacity/4)
			{
				resize(capacity/2);
			}
			return tmp;
		}
		int size()
		{
			return _size;
		}
		int &operator[](int i)
		{
			return data[i];
		}
};

void insertSort(MyVector &nums)
{
	for(int i = 1; i < nums.size(); i++)
	{
		for(int j = i; j > 0; j--)
		{
			if(nums[j] >= nums[j-1])
				break;
			swap(nums[j],nums[j-1]);
		}
	}
}

void printV(MyVector &nums)
{
	for(int i = 0; i < nums.size(); i++)
		cout<<nums[i]<<" ";
	cout<<endl;
}

int main(void)
{
	int size = 30;
	MyVector nums;
	for(int i = 0; i < size; i++)
	{
		nums.push_back(rand()%size);
	}
	printV(nums);
	insertSort(nums);
	printV(nums);

	return 0;
}
