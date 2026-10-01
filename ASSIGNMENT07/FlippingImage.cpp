#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {

        for (auto& row : image) {
            reverse(row.begin(), row.end());

            for (int& x : row)
                x = 1 - x;
        }

        return image;
    }
};

int main() {
    Solution obj;

    vector<vector<int>> image = {
        {1, 1, 0},
        {1, 0, 1},
        {0, 0, 0}
    };

    vector<vector<int>> result = obj.flipAndInvertImage(image);

    for (auto row : result) {
        for (int x : row)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}