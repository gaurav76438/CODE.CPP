#include <iostream>
using namespace std;

int main() {
    int start, end;
    cin >> start >> end;

    for (int n = start; n <= end; n++) {
        int square = n * n;
        int sum = 0;

        while (square != 0) {
            sum += square % 10;
            square /= 10;
        }

        if (sum == n)
            cout << n << " ";
    }

    return 0;
}