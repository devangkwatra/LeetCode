class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
    
        int rowCheck[9][9] = {0};                   //Matrix for storing frequency of numbers.
        int colCheck[9][9] = {0}; 
        int gridCheck[9][9] = {0};

        for(int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                if (board[i][j] != '.')
                {
                int num = board[i][j] - '0';
                int k = (i / 3) * 3 + (j / 3);        //Computing grid number
                if (rowCheck[i][num - 1]++ || colCheck[j][num - 1]++ || gridCheck[k][num - 1]++)          //    if value is 1 due to posIncrement, return false
                    return false;
                }
            }
        }
        return true;
    }
};
