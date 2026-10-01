#include <iostream>
#include <vector>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
    int current = 0;
    int maximum = 0;

    for (int x : nums) {
        if (x == 1) {
            current++;
            maximum = max(maximum, current);
        } else {
            current = 0;
        }
    }

    return maximum;
}

int main() {
    vector<int> nums = {1, 1, 0, 1, 1, 1};

    cout << "Maximum Consecutive Ones: "
         << findMaxConsecutiveOnes(nums);

    return 0;
}