#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool detectCapitalUse(string word) {
        int capital = 0;

        for (char c : word) {
            if (isupper(c))
                capital++;
        }

        if (capital == word.length())
            return true;

        if (capital == 0)
            return true;

        if (capital == 1 && isupper(word[0]))
            return true;

        return false;
    }
};

int main() {
    Solution obj;

    string word = "USA";

    cout << (obj.detectCapitalUse(word) ? "True" : "False");

    return 0;
}