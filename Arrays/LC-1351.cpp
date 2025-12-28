#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int row_size = grid.size();
        if (row_size == 0) return 0;
        int col_size = grid[0].size();
        
        int col = 0;
        int row = row_size - 1;
        int count = 0;

        while (row >= 0 && col < col_size) {
            if (grid[row][col] < 0) {
                // All elements to the right of (row, col) are negative
                count += (col_size - col);
                row--;
            } else {
                col++;
            }
        }
        return count;
    }
};

int main() {
    Solution sol;

    // Example input
    vector<vector<int>> grid = {
        {4, 3, 2, -1},
        {3, 2, 1, -1},
        {1, 1, -1, -2},
        {-1, -1, -2, -3}
    };

    int result = sol.countNegatives(grid);
    cout << "Number of negative numbers in the grid: " << result << endl;

    return 0;
}
