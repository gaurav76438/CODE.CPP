#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();

        vector<vector<int>> result(m, vector<int>(n));

        k = k % (m * n);

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {

                int index = i * n + j;
                int newIndex = (index + k) % (m * n);

                result[newIndex / n][newIndex % n] = grid[i][j];
            }
        }

        return result;
    }
};

int main() {
    Solution obj;

    vector<vector<int>> grid = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int k = 1;

    vector<vector<int>> result = obj.shiftGrid(grid, k);

    for (auto row : result) {
        for (int x : row)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}