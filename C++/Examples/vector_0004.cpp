/*************************************************************************
    > File Name: vector_0004.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct President
{
	std::string name;
	std::string country;
	int year;
	President(string p_name,string p_country, int p_year):name(std::move(p_name)), country(std::move(p_country)),year(p_year)
	{
		cout<<"construct calling!\n";
	}
	President(const President& other):name(std::move(other.name)), country(std::move(other.country)),year(other.year)
	{
		cout<<"the copy construct calling!\n";
	}
	President(President&& other):name(std::move(other.name)), country(std::move(other.name)), year(other.year)
	{
		cout<<"moved!\n";
	}
	President& operator=(const President& other);
};
int main(void)
{
	vector<President> e;
	std::cout<<"emplace_back calling:"<<endl;
	e.emplace_back("Nelson Madela", "South Africa", 1994);

	vector<President> e1;
	std::cout<<"\npush_back calling:"<<endl;
	e1.push_back(President("Blue Li", "HongKong", 1977));

	cout<<"\nContents:\n";
	for(President const &president: e)
	{
		cout<<president.name<<","<<president.country<<","<<president.year<<endl;
	}
	for(President const &president: e1)
	{
		cout<<president.name<<","<<president.country<<","<<president.year<<endl;
	}
	return 0;
}
