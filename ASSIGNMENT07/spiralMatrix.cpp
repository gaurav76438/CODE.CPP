#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        vector<int> result;

        int top = 0;
        int bottom = matrix.size() - 1;
        int left = 0;
        int right = matrix[0].size() - 1;

        while (top <= bottom && left <= right) {

            for (int j = left; j <= right; j++)
                result.push_back(matrix[top][j]);

            top++;

            for (int i = top; i <= bottom; i++)
                result.push_back(matrix[i][right]);

            right--;

            if (top <= bottom) {
                for (int j = right; j >= left; j--)
                    result.push_back(matrix[bottom][j]);

                bottom--;
            }

            if (left <= right) {
                for (int i = bottom; i >= top; i--)
                    result.push_back(matrix[i][left]);

                left++;
            }
        }

        return result;
    }
};

int main() {
    Solution obj;

    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    vector<int> result = obj.spiralOrder(matrix);

    cout << "Spiral Order: ";

    for (int x : result)
        cout << x << " ";

    return 0;
}