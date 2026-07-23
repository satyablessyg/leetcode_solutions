#include <stdbool.h>
bool isValidSudoku(char** board, int boardSize, int* boardColSize) {
    int rows[9][9]={0};
    int cols[9][9]={0};
    int boxes[9][9]={0};
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {
            if(board[i][j]=='.')
            continue;
            int id=board[i][j]-'1';// Convert character digit '1'-'9' to 0-indexed integer 0-8
            int boxIdx = (i / 3) * 3 + (j / 3); // Calculate sub-box index (0 to 8)
            if(rows[i][id] || cols[j][id] || boxes[boxIdx][id]){
                return false;
            } 
            rows[i][id]=true;
            cols[j][id]=true;
            boxes[boxIdx][id]=true;
        }
    }
    return true;

}