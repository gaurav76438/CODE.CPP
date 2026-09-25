#include <iostream>
using namespace std;

int main() {
    int n, reverse = 0;
    cin >> n;

    while (n != 0) {
        reverse = reverse * 10 + n % 10;
        n /= 10;
    }

    cout << "Reverse = " << reverse;

    return 0;
}