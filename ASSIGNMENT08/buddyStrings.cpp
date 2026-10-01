#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if (s.length() != goal.length())
            return false;

        if (s == goal) {
            vector<int> freq(26, 0);

            for (char c : s) {
                freq[c - 'a']++;

                if (freq[c - 'a'] >= 2)
                    return true;
            }

            return false;
        }

        vector<int> diff;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] != goal[i])
                diff.push_back(i);
        }

        if (diff.size() != 2)
            return false;

        return s[diff[0]] == goal[diff[1]] &&
               s[diff[1]] == goal[diff[0]];
    }
};

int main() {
    Solution obj;

    string s = "ab";
    string goal = "ba";

    cout << (obj.buddyStrings(s, goal) ? "True" : "False");

    return 0;
}