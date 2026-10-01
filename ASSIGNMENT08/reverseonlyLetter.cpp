#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseOnlyLetters(string s) {
        int left = 0;
        int right = s.length() - 1;

        while (left < right) {

            while (left < right && !isalpha(s[left]))
                left++;

            while (left < right && !isalpha(s[right]))
                right--;

            if (left < right) {
                swap(s[left], s[right]);
                left++;
                right--;
            }
        }

        return s;
    }
};

int main() {
    Solution obj;

    string s = "ab-cd";

    cout << "Result: " << obj.reverseOnlyLetters(s);

    return 0;
}