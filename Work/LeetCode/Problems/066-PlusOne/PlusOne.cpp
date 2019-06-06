

class Solution
{
	public:
		vector<int> plusone(vector<int>& digits)
		{
			vecotr<int>::reverse_iterator it = digits.rbegin();
			while(9 == *it)
			{
				*it = 0;
				if(++it == digits.rend())
				{
					digits.insert(digits.begin(),1);
					return digits;
				}
			}
			++*it;
			return digits;
		}
};
