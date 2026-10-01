#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    if (nums.empty())
        return 0;

    int k = 1;

    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] != nums[i - 1]) {
            nums[k] = nums[i];
            k++;
        }
    }

    return k;
}

int main() {
    vector<int> nums = {1, 1, 2};

    int k = removeDuplicates(nums);

    cout << "Output: " << k << endl;
    cout << "Array: ";

    for (int i = 0; i < k; i++)
        cout << nums[i] << " ";

    return 0;
}