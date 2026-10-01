#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string toGoatLatin(string sentence) {
        stringstream ss(sentence);
        string word;
        string result;

        int index = 1;

        while (ss >> word) {

            char first = tolower(word[0]);

            if (first != 'a' && first != 'e' &&
                first != 'i' && first != 'o' &&
                first != 'u') {

                word = word.substr(1) + word[0];
            }

            word += "ma";

            for (int i = 0; i < index; i++)
                word += 'a';

            if (!result.empty())
                result += " ";

            result += word;

            index++;
        }

        return result;
    }
};

int main() {
    Solution obj;

    string sentence = "I speak Goat Latin";

    cout << obj.toGoatLatin(sentence);

    return 0;
}