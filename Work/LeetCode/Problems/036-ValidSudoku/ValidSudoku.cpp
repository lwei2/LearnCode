class Solution
{
    public:
        bool isValidSudoku(vector<vector<char> >& board)
        {
            int s1[9][9] = {0},s2[9][9]={0},s3[9][9]={0};
            for(int i = 0; i < board.size(); ++i)
            {
                for(int j = 0; j < board[i].size(); ++j)
                {
                    if(board[i][j] !='.')
                    {
                        
                        int num = board[i][j] - '0' - 1, k = i/3*3 + j/3;
                        if(s1[i][num]||s2[j][num]||s3[k][num])
                            return false;
                        s1[i][num] = s2[j][num]=s3[k][num]=1;

                    }
                }
            }
            return true;
        }
};
