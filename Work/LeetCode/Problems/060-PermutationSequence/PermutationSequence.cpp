class Solution
{
	public:
		string getPermutation(int n, int k)
		{
			std::vector<char> digits(n);
			std::iota(digits.begin(), digits.end(), '0' + 1);
			for(; k > 1; k--, std::next_permutation(digits.begin(), digits.end()));
			return std::string(digits.begin(), digits.end());
		}
}
