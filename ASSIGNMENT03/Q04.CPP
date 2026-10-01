#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    int even = 0, odd = 0;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];

        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    cout << "Number of even elements = " << even << endl;
    cout << "Number of odd elements = " << odd << endl;

    return 0;
}