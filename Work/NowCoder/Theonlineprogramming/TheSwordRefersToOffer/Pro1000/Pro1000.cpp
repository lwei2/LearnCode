/*************************************************************************
    > File Name: Pro1000.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :在一个二维数组中（每个一维数组的长度相同），每一行都按照从左到右递增的顺序排序，每一列都按照从上到下递增的顺序排序。请完成一个函数，输入这样的一个二维数组和一个整数，判断数组中是否含有该整数
 ************************************************************************/

#include<iostream>
#include<vector>

using namespace std;

class Solution
{
public:
	bool Find1(int target, vector<vector<int> >array)
	{
		if(array.empty())
			return false;
		int rowCount = array.size();
		int colCount = array[0].size();
		cout<<"rowCount:"<<rowCount<<",colCount:"<<colCount<<endl;
		for(int i = rowCount - 1, j = 0; i>=0 && j<colCount;)
		{
			if(target == array[i][j])
				return true;
			if(target < array[i][j])
			{
				i--;
				continue;
			}
			if(target>array[i][j])
			{
				j++;
				continue;
			}
		}
		return false;
	}
	bool Find2(int target, vector<vector<int> >array)
	{
		if(array.empty())
			return false;
		int length = array.size();
		for(int i = 0; i < length; i++)
		{
			if(array[i].empty())
				continue;
			else if(target >= array[i][0])
			{
				if(target <= array[i][array[i].size() - 1])
				{
					for(int j = array[j].size() - 1; j >= 0;j--)
					{
						if(target == array[i][j])
							return 1;
						else if(target > array[i][j])
							break;
					}
				}
				else
					continue;
			}
			else
				return false;
		}
		return false;
	}
	bool Find3(int target, vector<vector<int> > array)
	{
		if(array.size()!=0)
		{
			int row = 0;
			int col = array[0].size() - 1;
			while(row < array.size() && col >= 0)
			{
				if(array[row][col] == target)
					return true;
				else if(array[row][col] > target)
					--col; // col--;
				else
					++row; //row++;
			}
		}
		return false;
	}
	bool Find4(int target, vector<vector<int> >array)
	{
		if(array.empty())
			return false;
		int rows = array.size();
		int cols = array[0].size();
		int left = 0, right = rows * cols - 1;
		int mid,i,j;
		while(left <= right)
		{
			mid = left + (right - left)/2;
			i = mid / cols;
			j = mid % cols;
			if(array[i][j] < target)
				left = mid + 1;
			else if(array[i][j] > target)
				right = mid - 1;
			else
				return false;
		}
		return false;
	}
};

int main(void)
{
	Solution pro;
	vector<vector<int> > s(4);
	for(int i = 0; i < s.size(); i++)
		s[i].resize(2);
	for(int i = 0; i < s.size(); i++)
	{
		for(int j = 0; j < s[0].size(); j++)
		{
			s[i][j] = i+j;
		}
	}
	for(int i = 0; i < s.size(); i++)
	{
		for(int j = 0; j < s[0].size(); j++)
		{
			cout<<s[i][j]<<" ";
		}
		cout<<endl;
	}
	if(pro.Find1(100,s))
		cout<<"true"<<endl;
	else
		cout<<"false"<<endl;

	return 0;
}
