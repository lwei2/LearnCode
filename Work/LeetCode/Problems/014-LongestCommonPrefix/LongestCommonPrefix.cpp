class Solution
{
	public:
		string longestCommonPrefix(vector<string>& strs)
		{
			const int n = strs.size();
			if(n<=0)
				return "";
			if(n<=1)
				return strs[0];
			std::sort(strs.begin(),strs.end());
			int i;
			for(i=0;(i<strs[0].size())&&(i<strs[n-1].size())&&(strs[0][i]==strs[n-1][i]);i++)
			  ;

			return strs[0].substr(0,i);
		}
};
