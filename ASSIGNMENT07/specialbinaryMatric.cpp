#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        int count = 0;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {

                if (mat[i][j] != 1)
                    continue;

                bool special = true;

                for (int k = 0; k < n; k++) {
                    if (k != j && mat[i][k] == 1)
                        special = false;
                }

                for (int k = 0; k < m; k++) {
                    if (k != i && mat[k][j] == 1)
                        special = false;
                }

                if (special)
                    count++;
            }
        }

        return count;
    }
};

int main() {
    Solution obj;

    vector<vector<int>> mat = {
        {1, 0, 0},
        {0, 0, 1},
        {1, 0, 0}
    };

    cout << "Special Positions = " << obj.numSpecial(mat);

    return 0;
}