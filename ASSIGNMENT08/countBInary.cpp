#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countBinarySubstrings(string s) {
        int previous = 0;
        int current = 1;
        int answer = 0;

        for (int i = 1; i < s.length(); i++) {

            if (s[i] == s[i - 1]) {
                current++;
            }
            else {
                answer += min(previous, current);
                previous = current;
                current = 1;
            }
        }

        answer += min(previous, current);

        return answer;
    }
};

int main() {
    Solution obj;

    string s = "00110011";

    cout << "Count = " << obj.countBinarySubstrings(s);

    return 0;
}