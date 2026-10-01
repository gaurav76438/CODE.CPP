#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        vector<int> rowMin(m, INT_MAX);
        vector<int> colMax(n, INT_MIN);

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                rowMin[i] = min(rowMin[i], matrix[i][j]);
                colMax[j] = max(colMax[j], matrix[i][j]);
            }
        }

        vector<int> result;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] == rowMin[i] &&
                    matrix[i][j] == colMax[j]) {
                    result.push_back(matrix[i][j]);
                }
            }
        }

        return result;
    }
};

int main() {
    Solution obj;

    vector<vector<int>> matrix = {
        {3, 7, 8},
        {9, 11, 13},
        {15, 16, 17}
    };

    vector<int> result = obj.luckyNumbers(matrix);

    cout << "Lucky Numbers: ";

    for (int x : result)
        cout << x << " ";

    return 0;
}