class Solution
{
	public:
		string simplifyPath(string path)
		{
			deque<string> tmp;
			int len = path.size();
			tmp.push_back("/");
			int i = 0;
			while(i < len)
			{
				while(i < len && path[i] == '/')
				{
					i++;
				}
				if(i >= len)
					break;
				if(path[i] == '.')
				{
					int j = 0;
					while(i < len && path[i] != '/')
					{
						i++;
						j++;
					}
					if(j == 1)
						;
					else if(j == 2)
					{
						if(tmp.back() != "/")
						{
							tmp.pop_back();
						}				
					}
					else
					{
						tmp.push_back(path.substr(i-j,j));
					}
				}
				else
				{
					int j = 0;
					while(i < len && path[i] != '/')
					{
						j++;
						i++;
					}
					tmp.push_back(path.substr(i-j,j));
				}
			}
			string res = "";
			tmp.pop_front();
			while(!tmp.empty())
			{
				res += "/";
				res += tmp.front();
				tmp.pop_front();
			}
			return res == "" ? "/":res;
		}
};
