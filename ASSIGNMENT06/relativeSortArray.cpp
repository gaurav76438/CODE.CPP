#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

vector<int> relativeSortArray(vector<int>& arr1,
                              vector<int>& arr2) {

    map<int, int> frequency;

    for (int x : arr1)
        frequency[x]++;

    vector<int> result;

    for (int x : arr2) {
        while (frequency[x] > 0) {
            result.push_back(x);
            frequency[x]--;
        }
    }

    for (auto p : frequency) {
        while (p.second > 0) {
            result.push_back(p.first);
            p.second--;
        }
    }

    return result;
}

int main() {
    vector<int> arr1 =
        {2, 3, 1, 3, 2, 4, 6, 7, 9, 2, 19};

    vector<int> arr2 =
        {2, 1, 4, 3, 9, 6};

    vector<int> result =
        relativeSortArray(arr1, arr2);

    cout << "Output: ";

    for (int x : result)
        cout << x << " ";

    return 0;
}