class Solution
{
	public:
		vector<string> fullJustify(vector<string>& words, int maxWidth)
		{
			vector<string> result;
			if(words.empty())
				return result;
			for(int i = 0; i < words.size(); ++i)
				if(words[i].size() > maxWidth)
					return result;
			string subword;
			vector<int>tmp;

			for(int i = 0; i < words.size(); ++i)
			{
				if(i == words.size() - 1)
				{
					if(subword.size() == 0)
					{
						result.push_back(words[i]);
						while(result[result.size()-1].size()<maxWidth)
						{
							result[result.size()-1].push_back(' ');
						}
						continue;
					}
					if(words[i].size() + 1 <= maxWidth - subword.size())
					{
						result.push_back(subword + " " + words[i]);
						while(result[result.size()-1].size() < maxWidth)
						{
							result[result.size()-1].push_back(' ');
						}
						continue;
					}
				}
				if(tmp.empty())
				{
					subword = words[i];
					tmp.push_back(subword.size());
					continue;
				}
				if(words[i].size() + 1 <= maxWidth - subword.size())
				{
					subword += " " + words[i];
					tmp.push_back(subword.size());
					continue;
				}
				if(tmp.size() == 1)
				{
					while(subword.size() < maxWidth)
						subword += " ";
					result.push_back(subword);
					tmp.clear();
					subword = "";
					i--;
					continue;
				}
				int flag = maxWidth - subword.size();
				for(int j = 0, k = 0; j < subword.size();)
				{
					if((subword[j] == ' ') && (k < flag%(tmp.size() - 1)))
					{
						subword.insert(j, flag/(tmp.size() - 1)+1, ' ');
						j += flag/(tmp.size() -1)+2;
						k++;
					}
					else if(subword[j] == ' ')
					{
						subword.insert(j,flag/(tmp.size() - 1),' ');
						j += flag/(tmp.size() - 1) + 1;
						k++;
					}
					else
						j++;

				}
				result.push_back(subword);
				subword = "";
				tmp.clear();
				i--;
			}
			return result;
		}
};




