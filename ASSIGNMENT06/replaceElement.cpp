#include <iostream>
#include <vector>
using namespace std;

vector<int> replaceElements(vector<int>& arr) {
    int maximum = -1;

    for (int i = arr.size() - 1; i >= 0; i--) {
        int current = arr[i];

        arr[i] = maximum;

        maximum = max(maximum, current);
    }

    return arr;
}

int main() {
    vector<int> arr = {17, 18, 5, 4, 6, 1};

    replaceElements(arr);

    cout << "Output: ";

    for (int x : arr)
        cout << x << " ";

    return 0;
}