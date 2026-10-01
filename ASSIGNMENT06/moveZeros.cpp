#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int>& nums) {
    int index = 0;

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != 0) {
            nums[index] = nums[i];
            index++;
        }
    }

    while (index < nums.size()) {
        nums[index] = 0;
        index++;
    }
}

int main() {
    vector<int> nums = {0, 1, 0, 3, 12};

    moveZeroes(nums);

    cout << "Output: ";

    for (int x : nums)
        cout << x << " ";

    return 0;
}