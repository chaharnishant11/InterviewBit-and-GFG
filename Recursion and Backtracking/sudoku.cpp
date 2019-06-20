bool checkRow(int board[][9],int row,int n){
    for(int j=0;j<9;j++){
        if(board[row][j]==n)
            return false;
    }
    return true;
}

bool checkCol(int board[][9],int col,int n){
    for(int j=0;j<9;j++){
        if(board[j][col]==n)
            return false;
    }
    return true;
}

bool checkBox(int board[][9],int sx,int sy,int n){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(board[sx+i][sy+j]==n){
                return false;
            }
        }
    }
    return true;
}

bool isSafe(int board[][9],int x,int y,int n){
    return checkRow(board,x,n) && checkCol(board,y,n) && checkBox(board,x-x%3,y-y%3,n);
}

bool helper(int board[][9],int x,int y){
    if(x==8){
        return true;
    }if(y==8){
        return helper(board,x+1,0);
    }if(board[x][y]!=0){
        return helper(board,x,y+1);
    }
    for(int i=1;i<10;i++){
        if(isSafe(board,x,y,i)){
            board[x][y]=i;
            if(helper(board,x,y+1))
                return true;
        }
        board[x][y]=0;
    }

    return false;
}



bool sudokuSolver(int board[][9]){

  /* Don't write main().
   *  Don't read input, it is passed as function argument.
   *  Don't print output and return output as specified in the question
  */
    return helper(board,0,0);

}
