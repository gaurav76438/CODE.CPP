#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int i = 0;
        int j = 0;

        while (j < typed.length()) {

            if (i < name.length() && name[i] == typed[j]) {
                i++;
                j++;
            }
            else if (j > 0 && typed[j] == typed[j - 1]) {
                j++;
            }
            else {
                return false;
            }
        }

        return i == name.length();
    }
};

int main() {
    Solution obj;

    string name = "alex";
    string typed = "aaleex";

    cout << (obj.isLongPressedName(name, typed) ? "True" : "False");

    return 0;
}