#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.length() != t.length())
            return false;

        vector<int> map1(256, -1);
        vector<int> map2(256, -1);

        for (int i = 0; i < s.length(); i++) {
            if (map1[s[i]] == -1 && map2[t[i]] == -1) {
                map1[s[i]] = t[i];
                map2[t[i]] = s[i];
            }
            else {
                if (map1[s[i]] != t[i] ||
                    map2[t[i]] != s[i])
                    return false;
            }
        }

        return true;
    }
};

int main() {
    Solution obj;

    string s = "egg";
    string t = "add";

    cout << (obj.isIsomorphic(s, t) ? "True" : "False");

    return 0;
}