#include <iostream>
using namespace std;

int main() {
    int a, b, x, y, gcd;
    cin >> a >> b;

    x = a;
    y = b;

    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }

    gcd = x;
    cout << "LCM = " << (a * b) / gcd;

    return 0;
}