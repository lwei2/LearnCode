Problems:	运用vector容器解决实际问题
	#include <iostream>
	#include <fstream>
	#include <vector>
	using namespace std;

	void Order(vector<int> &data)
	{	
		int count = data.size();
		for(int i = 0; i < count; i++)
		{
			for(int j = 0; j < count-i-1; j++)
			{
				if(data[j] > data[j+1])
				{
					int temp = data[j];
					data[j] = data[j+1];
					data[j+1] = temp;
				}
			}
		}
	}
	
	int main(void)
	{
		vector<int> data;
		ifstream in("C\\data.txt");
		if(!in)
		{
			cout<<"infile error!"<<endl;
			return 1;
		}
		int temp;
		while(!in.eof())
		{
			in>>temp;
			data.push_back(temp);
		}
		in.close();
		Order(data);
		fstream out("c:\\result.txt");
		if(!out)
		{
			cout"outfile error"<<endl;
			return 1;
		}
		for(int i = 0; i < data.size(); i++)
			out<<data[i]<<" ";
		out.close();
		return 0;
	}
