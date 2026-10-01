#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count = 0;

        for (auto& row : grid) {
            for (int x : row) {
                if (x < 0)
                    count++;
            }
        }

        return count;
    }
};

int main() {
    Solution obj;

    vector<vector<int>> grid = {
        {4, 3, 2, -1},
        {3, 2, 1, -1},
        {1, 1, -1, -2},
        {-1, -1, -2, -3}
    };

    cout << "Negative Numbers = "
         << obj.countNegatives(grid);

    return 0;
}