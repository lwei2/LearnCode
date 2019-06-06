class Solution
{
    public:
        int total = 0;
        void dfs(vector<vector<string>> &ans, vector<string> &tmp, int row, int &n)
        {
            if(row == n)
            {
                total++;
                return;
            }
            for(int col = 0; col < n; col++)
            {
                if(check(tmp,row,col,n))
                {
                    tmp[row][col] = 'Q';
                    dfs(ans,tmp,row+1,n);
                    tmp[row][col] = '.';
                }
            }

        }
        bool check(vector<string> &tmp, int row, int col, int &n)
        {
            for(int i = 0; i < col; i++)
            {
                if(tmp[row][i] == 'Q')
                    return false;
            }
            for(int i = 0; i < row; i++)
            {
                if(tmp[i][col] == 'Q')
                    return false;
            }
            for(int i = row - 1, j = col - 1; i >= 0 && j >= 0; --i, --j)
            {
                if(tmp[i][j] == 'Q')
                    return false;
            }
            for(int i = row - 1, j = col + 1; i >= 0 && j < n; --i, j++)
            {
                if(tmp[i][j] == 'Q')
                    return false;
            }
            return true;

        }
        int totalNQueens(int n)
        {
            vector<vector<string> >ans;
            vector<string> tmp(n, string(n,'.'));
            dfs(ans, tmp, 0, n);
            return total;
        }
};
