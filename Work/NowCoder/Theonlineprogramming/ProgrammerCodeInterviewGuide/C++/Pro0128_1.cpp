/*************************************************************************
    > File Name: Pro0128_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <vector>

using namespace std;

using operation_t = void (*)(int stack[], int &sj);

void add2(int stack[], int &sj)
{
	int r = stack[--sj];
	int l = stack[--sj];
	stack[sj++] = l + r;
}

void sub2(int stack[], int &sj)
{
	int r = stack[--sj];
	int l = sj == 0 ? 0 : stack[--sj];
	stack[sj++] = l - r;
}

void mul2(int stack[], int &sj)
{
	int r = stack[--sj];
	int l = stack[--sj];
	stack[sj++] = l * r;
}

void div2(int stack[], int & sj)
{
	int r = stack[--sj];
	int l = stack[--sj];
	stack[sj++] = l / r;
}

operation_t create(char ch)
{
	if(ch == '+')
		return add2;
	if(ch == '-')
		return sub2;
	if(ch == '*')
		return mul2;
	return div2;
}


int main(void)
{
	int weight[128] = {0};
	weight['*'] = 1;
	weight['/'] = 1;
	weight['+'] = 2;
	weight['-'] = 2;
	weight['('] = 3;
	weight[')'] = 4;
	
	string expr;
	cin>>expr;
	expr.insert(expr.begin(), '(');
	expr.push_back(')');

	int sj1 = 0,sj2 = 0;
	vector<int> operand1(1000);
	vector<pair<operation_t, int>> operator2(1000);

	for(int i = 0; i < expr. size(); )
	{
		int w = weight[expr[i]];
		switch(expr[i])
		{
			case '+':
			case '-':
			case '*':
			case '/':
				while(sj2 != 0 && operator2[sj2 - 1].second <= w)
				{
					auto &op = operator2[--sj2];
					(op.first)(operand1.data(), sj1);
				}
				operator2[sj2++] = {create(expr[i]), w};
				++i;
				break;
			case '(':
				operator2[sj2++] = {
					nullptr, w
				};
				++i;
				break;
			case ')':
				while(sj2 != 0 && operator2[sj2 - 1].second != weight['('])
				{
					auto & op = operator2[--sj2];
					(op.first)(operand1.data(), sj1);
				}
				--sj2;
				++i;
				break;
			default:
				int num = 0;
				while(i != expr.size() && '0' <= expr[i] && expr[i] <= '9')
				{
					num = num * 10 + expr[i] - '0';
					++i;
				}
				operand1[sj1++] = num;
				break;
		}
	}
	cout<<operand1[0]<<endl;
	return 0;
}
