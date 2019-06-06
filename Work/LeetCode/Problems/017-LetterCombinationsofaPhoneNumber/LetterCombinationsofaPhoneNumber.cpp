class Solution
{
	public:
		 void util(string &digits, unordered_map<char, string>& myMap, int start, vector<string>&res, string &substring)
    {
        if(substring.size() == digits.size())
            res.push_back(substring);
        else {
            for(int i = start; i < digits.size(); i++)
            {
                string letters = myMap[digits[i]];
                for(int j = 0; j < letters.size(); j++)
                {
                    substring.push_back(letters[j]);
                    util(digits, myMap, i + 1, res, substring);
                    substring.pop_back();
                }
            }
        }
    }
		vector<string> letterCombinations(string digits)
		{
			 unordered_map<char, string> myMap = {{'2',"abc"},
                                             {'3',"def"},
                                             {'4',"ghi"},
                                             {'5',"jkl"},
                                             {'6',"mno"},
                                             {'7',"pqrs"},
                                             {'8',"tuv"},
                                             {'9',"wxyz"}};
        string substrings;
        vector<string> res;
        if(digits.size() == 0)
            return res;
        util(digits, myMap, 0, res, substrings);
        return res;
		}
};
