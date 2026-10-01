#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int>& nums) {
    int candidate = 0;
    int count = 0;

    for (int x : nums) {
        if (count == 0)
            candidate = x;

        if (x == candidate)
            count++;
        else
            count--;
    }

    return candidate;
}

int main() {
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};

    cout << "Majority Element: "
         << majorityElement(nums);

    return 0;
}