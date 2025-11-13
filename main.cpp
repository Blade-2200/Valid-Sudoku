// Valid Sudoku

// **Problem Statement**
// You are given a 9 x 9 Sudoku board board. A Sudoku board is valid if the following rules are followed:
// 1. Each row must contain the digits 1-9 without duplicates.
// 2. Each column must contain the digits 1-9 without duplicates.
// 3. Each of the nine 3 x 3 sub-boxes of the grid must contain the digits 1-9 without duplicates.
// Return true if the Sudoku board is valid, otherwise return false
// Note: A board does not need to be full or be solvable to be valid.

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
        seen.clear();
        for (int i = 0; i < 3; i++) {
            for (int j = 3; j < 6; j++) {
                std::cout << std::string(1, board[i][j]);
                std::string value(1, board[i][j]);
                if (board[i][j] != '.') {
                    if (seen.find(value) != seen.end()) {
                        return false;
                    } else { seen.insert(std::string(1, board[i][j])); }
                }
            }   
        }
        seen.clear();
        for (int i = 0; i < 3; i++) {
            for (int j = 6; j < 9; j++) {
                std::cout << std::string(1, board[i][j]);
                std::string value(1, board[i][j]);
                if (board[i][j] != '.') {
                    if (seen.find(value) != seen.end()) {
                        return false;
                    } else { seen.insert(std::string(1, board[i][j])); }
                }
            }   
        }
        seen.clear();
        for (int i = 3; i < 6; i++) {
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
        seen.clear();
        for (int i = 3; i < 6; i++) {
            for (int j = 3; j < 6; j++) {
                std::cout << std::string(1, board[i][j]);
                std::string value(1, board[i][j]);
                if (board[i][j] != '.') {
                    if (seen.find(value) != seen.end()) {
                        return false;
                    } else { seen.insert(std::string(1, board[i][j])); }
                }
            }   
        }
        seen.clear();
        for (int i = 3; i < 6; i++) {
            for (int j = 6; j < 9; j++) {
                std::cout << std::string(1, board[i][j]);
                std::string value(1, board[i][j]);
                if (board[i][j] != '.') {
                    if (seen.find(value) != seen.end()) {
                        return false;
                    } else { seen.insert(std::string(1, board[i][j])); }
                }
            }   
        }
        seen.clear();
        for (int i = 6; i < 9; i++) {
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
        seen.clear();
        for (int i = 6; i < 9; i++) {
            for (int j = 3; j < 6; j++) {
                std::cout << std::string(1, board[i][j]);
                std::string value(1, board[i][j]);
                if (board[i][j] != '.') {
                    if (seen.find(value) != seen.end()) {
                        return false;
                    } else { seen.insert(std::string(1, board[i][j])); }
                }
            }   
        }
        seen.clear();
        for (int i = 6; i < 9; i++) {
            for (int j = 6; j < 9; j++) {
                std::cout << std::string(1, board[i][j]);
                std::string value(1, board[i][j]);
                if (board[i][j] != '.') {
                    if (seen.find(value) != seen.end()) {
                        return false;
                    } else { seen.insert(std::string(1, board[i][j])); }
                }
            }   
        }

        for (int i = 0; i < 9; i++) {
            seen.clear();
            for (int j = 0; j < 9; j++) {
                std::string value(1, board[i][j]);
                if (board[i][j] != '.') {
                    if (seen.find(value) != seen.end()) {
                        return false;
                    } else { seen.insert(std::string(1, board[i][j])); }
                }
            }
        }
        for (int j = 0; j < 9; j++) {
            seen.clear();
            for (int i = 0; i < 9; i++) {
                if (board[i][j] != '.') {
                    std::string value(1, board[i][j]);
                    if (seen.find(value) != seen.end()) {
                        return false;
                }
                seen.insert(value);
            }
        }
    }

        return true;
    }
};
        return true;
    }
};
