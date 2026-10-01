#include <iostream>
using namespace std;

int main() {
    int n, element, count = 0;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter element to find frequency: ";
    cin >> element;

    for (int i = 0; i < n; i++) {
        if (arr[i] == element) {
            count++;
        }
    }

    cout << "Frequency of " << element << " = " << count << endl;

    return 0;
}