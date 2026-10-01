#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool backspaceCompare(string s, string t) {

        string a, b;

        for (char c : s) {
            if (c == '#') {
                if (!a.empty())
                    a.pop_back();
            }
            else {
                a.push_back(c);
            }
        }

        for (char c : t) {
            if (c == '#') {
                if (!b.empty())
                    b.pop_back();
            }
            else {
                b.push_back(c);
            }
        }

        return a == b;
    }
};

int main() {
    Solution obj;

    string s = "ab#c";
    string t = "ad#c";

    cout << (obj.backspaceCompare(s, t) ? "True" : "False");

    return 0;
}