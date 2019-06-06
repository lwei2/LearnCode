class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        for(int i = 0; i < matrix.size();i++)
        {
            for(int j = 0; j < i; j++)
            {
                swap(m[i][j],m[j][i]);
            }
        }
        for(int i = 0; i < matrix.size();i++)
            reverse(m[i].begin(),m[i].end());
    }
};
