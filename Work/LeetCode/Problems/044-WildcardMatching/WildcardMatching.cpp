class Solution
{
    public:
        int dfs(string& s,string& p, int si, int pi)
        {
            if(si == s.size()&& pi == p.size())
                return 2;
            if(si == s.size() && p[pi]!='*')
                return 0;
            if(pi == p.size())
                return 1;
            if(p[pi]=='*')
            {
                if(pi+1<p.size()&&p[pi+1]=='*')
                    return dfs(s,p,si,pi+1);
                for(int i = 0; i <= s.size() - si; ++i)
                {
                    int ret = dfs(s,p,si+i,pi+1);
                    if(ret == 0 || ret == 2)
                        return ret;
                }
            }
            if(p[pi] =='?' || s[si] == p[pi])
                return dfs(s,p,si+1,pi+1);
            return 1;
        }
        bool isMatch(string s, string p)
        {
           return dfs(s,p,0,0)>1; 
        }
};
