class Solution
{
    public:
       public:
    /*
    Checks if char k can be filled in the given position
    */
    bool valid(vector<vector<char>>& board,int i,int j,char k,int box3_i,int box3_j){        
        int l,m;
        for(l=0;l<9;l++)
            if(board[i][l]==k)
                return false;
        for(l=0;l<9;l++)
            if(board[l][j]==k)
                return false;
        for(l=box3_i;l<box3_i+3;l++){
            for(m=box3_j;m<box3_j+3;m++)
                if(board[l][m]==k)
                    return false;
        }
        return true;
        
    }
    /*
    Return the starting index of 3x3 block of the cell board[i][j]
    */
    void getbox(int i,int j,int &bi,int &bj){
        for(int l=3;l<10;l=l+3){
            for(int m=3;m<10;m=m+3){
                if(i<l&&j<m){
                    bi=l-3;
                    bj=m-3;
                    return;
                }
            }
        }        
            
    }
    /*
    Main Function To Solve Using Recursion And BackTracking
    */
    bool solve(vector<vector<char>>& board,int ii,int jj){
        int i,j,bi,bj;
        char k;        
        for(i=ii;i<9;i++){
            for(j=0;j<9;j++){
                if(board[i][j]=='.'){                    
                    getbox(i,j,bi,bj);//Get bi,bj , starting index of 3x3 block of this cell                    
                    for(k='1';k<='9';k++){                        
                        if(valid(board,i,j,k,bi,bj)){//If char k can be filled in this cell                             
                            board[i][j]=k; //fill char k in this cell                           
                            if(solve(board,i,j))//solve with new board having k filled in this cell
                                return true; //If Solved Completely 
                            else
                            board[i][j]='.';// Reset this cell to empty and try other chars(1-9)
                        }       
                    }//End-for trying all chars(1-9) in this cell                    
                    if(board[i][j]=='.')//if Unable to fill this cell 
                        return false;   //Backtrack,                 
                
                }//end-if empty
                
            }//end-inner-loop
        }//end-outer-loop
        
        return true;//Solved 
        
    }
    void solveSudoku(vector<vector<char>>& board) {
        solve(board,0,0);
        
        
    }
};
