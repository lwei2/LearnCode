class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
    vector<int>ans;
    if(words.empty())
        return ans;
    map<string,int>hash;
    for(int i = 0; i < words.size();++i)
        ++hash[words[i]];
    int len = words[0].size();
    for(int i = 0; i < s.size(); ++i)
    {
        int cnt = 1; 
        map<string,int> temp = hash;
        if((i+len<=s.size())&&temp[s.substr(i,len)]--)
        {
            while((i+cnt*len)<s.size())
            {
                if(temp[s.substr(i+cnt*len,len)]--)
                    ++cnt;
                else
                    break;
            }
            if(cnt == words.size())
                ans.push_back(i);
        }
    }
    return ans;    
  }
};
