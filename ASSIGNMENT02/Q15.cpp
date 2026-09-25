#include <iostream>
using namespace std;

int main() {
    int n, original, temp, digits = 0, sum = 0;
    cin >> n;

    original = n;
    temp = n;

    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = n;

    while (temp != 0) {
        int digit = temp % 10;
        int power = 1;

        for (int i = 0; i < digits; i++)
            power *= digit;

        sum += power;
        temp /= 10;
    }

    if (sum == original)
        cout << "Armstrong Number";
    else
        cout << "Not an Armstrong Number";

    return 0;
}