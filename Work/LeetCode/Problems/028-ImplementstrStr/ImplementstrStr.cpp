class Solution
{
	public:
		int strStr(string haystack, string needle)
		{
			if(needle.empty())
				return 0;
			size_t count = haystack.find(needle);
			if(count!=std::string::npos)
				return count;
			else
				return -1;
		}
};



