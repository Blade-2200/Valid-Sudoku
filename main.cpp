// Valid Sudoku

// **Problem Statement**
// You are given a 9 x 9 Sudoku board board. A Sudoku board is valid if the following rules are followed:
// 1. Each row must contain the digits 1-9 without duplicates.
// 2. Each column must contain the digits 1-9 without duplicates.
// 3. Each of the nine 3 x 3 sub-boxes of the grid must contain the digits 1-9 without duplicates.
// Return true if the Sudoku board is valid, otherwise return false
// Note: A board does not need to be full or be solvable to be valid.

// ## **Approach**  
// ### **1. Brute Force (if applicable)**
// - Iterate through every 3x3 elements and check if there is any duplicates.
// - Time Compleixty: O(1)
// - Space Compleixty: O(1)

// ### **2. Optimized Hash Set Approach**
// - Use a hash set to track seen digits for:
//     - each row,
//     - each column,
//     - each 3×3 box.
// - For every non-empty cell, generate three keys:
//     - `"digit row r"`
//     - `"digit col c"`
//     - `"digit box b"`  → where `b = (r/3)*3 + c/3`
// - If any key already exists, the board is invalid.
// - Otherwise, insert keys into the set.
// - This avoids using 3 separate data structures.
// - Time Complexity: O(1) — board size is fixed (81 cells)
// - Space Complexity: O(1) — at most 81 entries in the set

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<string> seen;

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                char c = board[i][j];
                if (c == '.') continue;

                string rowKey = string(1, c) + " row " + to_string(i);
                string colKey = string(1, c) + " col " + to_string(j);
                string boxKey = string(1, c) + " box " + to_string((i/3)*3 + j/3);

                if (seen.count(rowKey) || seen.count(colKey) || seen.count(boxKey))
                    return false;

                seen.insert(rowKey);
                seen.insert(colKey);
                seen.insert(boxKey);
            }
        }

        return true;
    }
};
