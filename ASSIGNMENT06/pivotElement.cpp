#include <iostream>
#include <vector>
using namespace std;

int pivotIndex(vector<int>& nums) {
    int total = 0;

    for (int x : nums)
        total += x;

    int leftSum = 0;

    for (int i = 0; i < nums.size(); i++) {
        int rightSum = total - leftSum - nums[i];

        if (leftSum == rightSum)
            return i;

        leftSum += nums[i];
    }

    return -1;
}

int main() {
    vector<int> nums = {1, 7, 3, 6, 5, 6};

    cout << "Pivot Index: " << pivotIndex(nums);

    return 0;
}