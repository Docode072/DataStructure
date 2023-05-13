bool isSafe(int row,int col,int board[N][N],int val){
    
       for(int i=0;i<N;++i){
           //row
        if(board[row][i]==val)return false;
           //col
        if(board[i][col]==val)return false;
           //3*3 Matrix
        if(board[3*(row/3)+i/3][3*(col/3)+i%3]==val)return false;  
       }
       return true;
} 
    bool SolveSudoku(int board[N][N])  
    { 
        for(int row=0;row<N;++row){
            for(int col=0;col<N;++col){
                if(board[row][col]==0){
                    for(int val=1;val<=9;++val){
                        if(isSafe(row,col,board,val)){
                              board[row][col]=val;
                         bool nextSol=SolveSudoku(board);
                         if(nextSol)
                             return true;
                             else
                             {
                        board[row][col]=0; 
                             }
                        }
                    }
                 return false;
                    
                }
            }
        }
        return true;
    }
    
    //Function to print grids of the Sudoku.
    void printGrid (int grid[N][N]) 
    {
        SolveSudoku(grid);
        for(int i=0;i<N;++i){
            for(int j=0;j<N;++j){
                cout<<grid[i][j]<<" ";
            }
        }
    }
