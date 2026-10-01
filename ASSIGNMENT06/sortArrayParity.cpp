#include <iostream>
#include <vector>
using namespace std;

vector<int> sortArrayByParity(vector<int>& nums) {
    int left = 0;
    int right = nums.size() - 1;

    while (left < right) {

        if (nums[left] % 2 == 0) {
            left++;
        }
        else if (nums[right] % 2 == 1) {
            right--;
        }
        else {
            swap(nums[left], nums[right]);
            left++;
            right--;
        }
    }

    return nums;
}

int main() {
    vector<int> nums = {3, 1, 2, 4};

    vector<int> result =
        sortArrayByParity(nums);

    cout << "Output: ";

    for (int x : result)
        cout << x << " ";

    return 0;
}