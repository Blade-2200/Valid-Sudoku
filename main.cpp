class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        set<string> seen;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                std::cout << std::string(1, board[i][j]);
                std::string value(1, board[i][j]);
                if (board[i][j] != '.') {
                    if (seen.find(value) != seen.end()) {
                        return false;
                    } else { seen.insert(std::string(1, board[i][j])); }
                }
            }   
        }
        return true;
    }
};
