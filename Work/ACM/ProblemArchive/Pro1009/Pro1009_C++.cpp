/*************************************************************************
    > File Name: Pro1009_C++.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include<iostream>
#include<algorithm>
#include<iomanip>

using namespace std;

struct trade
{
	int javaBean;
	int cat_food;
	double rate;
};
bool bigger(trade a, trade b)
{
	if(a.rate == b.rate)
		return a.javaBean > b.javaBean;
	else
		return a.rate > b.rate;
}

int main(void)
{
	int M,N;
	int temp;
	double total_javaBean = 0.0;
	trade *input_trade;
	while(cin>>M>>N)
	{
		if(-1 == M && -1 == N)
			break;
		input_trade = new trade[N];
		for(int i = 0; i < N; i++)
		{
			cin>>input_trade[i].javaBean>>input_trade[i].cat_food;
			input_trade[i].rate = (double)input_trade[i].javaBean/input_trade[i].cat_food;
		}
		sort(input_trade, input_trade+N, bigger);
		temp = M;
		for(int j = 0; j < N; j++)
		{
			if(temp >= input_trade[j].cat_food)
			{
				total_javaBean += input_trade[j].javaBean;
				temp -= input_trade[j].cat_food;
			}
			else
			{
				total_javaBean += ((double)temp/input_trade[j].cat_food)*input_trade[j].javaBean;
				break;
			}
		}
		cout<<setiosflags(ios::fixed)<<setprecision(3)<<total_javaBean<<endl;
		total_javaBean = 0;
		delete input_trade;
	}
	return 0;
}
