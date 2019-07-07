/*************************************************************************
    > File Name: RepeatedDNASequences.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

class Solution
{
	public:
		vector<string> findRepeatedDnaSequences(string s)
		{
			const pair<char,int> mapping[4] = {{'A',0},{'C',1},{'G',2},{'T',3}};
			vector<string> res;
			unordered_map<int, int>m;
			int dna = 0;
			for(int i = 0; i < s.length(); ++i)
			{
				dna >>= 2;
				int bits = 0;
				for(auto & m: mapping)
					if(m.first == s[i])
						bits = m.second;
				dna |= bits << (9*2);
				if(i >= 9)
				{
					m[dna]++;
					if(m[dna] == 2)
						res.push_back(s.substr(i-9,10));
				}
			}
			return res;
		}
};

int main(void)
{
	string Example = "AAAAACCCCCAAAAACCCCCCAAAAAGGGTTT";
	Solution s;
	s.findRepeatedDnaSequences(Example);

	return 0;
}
