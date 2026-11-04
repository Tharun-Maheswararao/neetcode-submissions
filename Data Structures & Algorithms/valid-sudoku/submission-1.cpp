class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // vector<set<int>> rows(9);
        // vector<set<int>> cols(9);
        // vector<set<int>> blocks(9);

        // for(int i = 0; i < 9; i++) {
        //     for(int j = 0; j < 9; j++) {
        //         if(board[i][j] == '.') {
        //             continue;
        //         }

        //         int curr = board[i][j] - '0';
        //         int currBox = (i / 3) * 3 + (j / 3);
        //         if(rows[i].contains(curr) or cols[j].contains(curr) or blocks[currBox].contains(curr)) {
        //             return false;
        //         }

        //         rows[i].insert(curr);
        //         cols[j].insert(curr);
        //         blocks[currBox].insert(curr);

        //     }
        // }

        // return true;

        bool rows[9][9] = {false};
        bool cols[9][9] = {false};
        bool blocks[9][9] = {false};

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[i][j] == '.') continue;

                int curr = board[i][j] - '1'; // Convert '1'-'9' to index 0-8
                int currBox = (i / 3) * 3 + (j / 3);

                // True O(1) checks (direct memory lookups)
                if (rows[i][curr] || cols[j][curr] || blocks[currBox][curr]) {
                    return false;
                }

                rows[i][curr] = true;
                cols[j][curr] = true;
                blocks[currBox][curr] = true;
            }
        }
        return true;

    }
};
