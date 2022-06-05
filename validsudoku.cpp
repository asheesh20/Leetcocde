class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
          
        
        
    int temp = 0;
    int row = 0;
    int col = 0;
    int table[9][10];
    int table1[9][10];
    int start = 0;
    int end = 0;
    int temp1 = 0;
    int index = 0;
    for (; row < 9; row++) {
        for (col = 0; col < 10; col++) {
            table[row][col] = -1;
            table1[row][col] = -1;
        }
    }
    cout << row << ' ' << col << '\n';
    for (row = 0; row < 9; row++) {
        for (col = 0; col < 9; col++) {
            index = board[row][col] - 48;
            if (index < 0)
                continue;

            if (table[row][index] != -1) {

                return false;
            }
            if(table1[col][index] != -1) {
                return false;
            }
            table1[col][index] = col;

            table[row][index] = col;

            temp = row % 3;
            start = (col / 3) * 3;
            end = start + 3;
            if (temp > 0) {
                temp1 = table[row - 1][index];
                if (temp1 != -1 && temp1 >= start && temp1 < end) {
                    return false;
                }
                --temp;
            }

            if (temp > 0) {
                temp1 = table[row - 2][index];
                if (temp1 != -1 && temp1 >= start && temp1 < end) {
                    return false;
                }
            }
        }

    }

    return true;

        
    }
};