#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int compress(vector<char>& chars) {

        int write = 0;
        int read = 0;

        while (read < chars.size()) {

            char current = chars[read];
            int start = read;

            while (read < chars.size() &&
                   chars[read] == current) {
                read++;
            }

            chars[write++] = current;

            int count = read - start;

            if (count > 1) {
                string num = to_string(count);

                for (char c : num)
                    chars[write++] = c;
            }
        }

        return write;
    }
};

int main() {
    Solution obj;

    vector<char> chars = {
        'a','a','b','b','c','c','c'
    };

    int length = obj.compress(chars);

    cout << "Compressed String: ";

    for (int i = 0; i < length; i++)
        cout << chars[i];

    return 0;
}