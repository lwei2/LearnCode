class Solution {
public:
    void dfs(vector<vector<string>> &ans, vector<string> &tmp, int row, int &n)
    {
        if(row == n) {
            ans.push_back(tmp);
            return;
        }
        for(int col = 0; col < n; col++) {
            if(check(tmp, row, col, n)) {
                tmp[row][col] = 'Q';
                dfs(ans, tmp, row + 1, n);
                tmp[row][col] = '.';
            }
        }
    }
    bool check(vector<string> &tmp, int row, int col, int &n) {
        for(int i = 0; i < col; i++) { // 横
            if(tmp[row][i] == 'Q') {
                return false;
            }
        }
        for(int i = 0; i < row; i++) { // 竖
            if(tmp[i][col] == 'Q') {
                return false;
            }
        }
        for(int i = row - 1, j = col - 1; i >= 0 && j >= 0 ; --i, --j) { // 右斜
            if(tmp[i][j] == 'Q') {
                return false;
            }
        }
        for(int i = row - 1, j = col + 1; i >= 0 && j < n; --i, j++) { // 左斜
            if(tmp[i][j] == 'Q') {
                return false;
            }
        }
        return true;
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> tmp(n, string(n,'.'));
        dfs(ans, tmp, 0 , n);
        return ans;
    }
};
