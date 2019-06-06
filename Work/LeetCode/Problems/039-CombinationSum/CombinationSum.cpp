class Solution
{
    public:
        vector<vector<int> > combinationSum(vector<int>&candidates, int target)
        {
            sort(candidates.begin(), candidates.end());
            vector<vector<int> > ret;
            vector<int>cur;
            find(candidates,ret,cur,target,0);
            return ret;
        }
        void find(vector<int>& candidates, vector<vector<int> >&ret, vector<int> cur, int  target, int start)
        {
            for(int i = start; i < candidates.size(); i++)
            {
                if(i>0&&candidates[i] == candidates[i-1])
                    continue;
                cur.push_back(candidates[i]);
                if(candidates[i]==target)
                    ret.push_back(cur);
                if(candidates[i]<target)
                    find(candidates,ret,cur,target-candidates[i],i);
                cur.pop_back();
            }
        }
};
