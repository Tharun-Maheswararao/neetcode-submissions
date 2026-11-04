class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<set<int>> rows(9);
        vector<set<int>> cols(9);
        vector<set<int>> blocks(9);

        for(int i = 0; i < 9; i++) {
            for(int j = 0; j < 9; j++) {
                if(board[i][j] == '.') {
                    continue;
                }

                int curr = board[i][j] - '0';
                int currBox = (i / 3) * 3 + (j / 3);
                if(rows[i].contains(curr) or cols[j].contains(curr) or blocks[currBox].contains(curr)) {
                    return false;
                }

                rows[i].insert(curr);
                cols[j].insert(curr);
                blocks[currBox].insert(curr);

            }
        }

        return true;

    }
};
