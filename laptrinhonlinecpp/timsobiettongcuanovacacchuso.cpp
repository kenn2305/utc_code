#include <iostream>
#include <cmath>
using namespace std;

int sumOfDigits(int number) {
    int sum = 0;
    while (number != 0) {
        sum += number % 10;
        number /= 10;
    }
    return sum;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    bool found = false;
    for (int i = max(0, n - 90); i < n; i++) {
        if (i + sumOfDigits(i) == n) {
            cout << i << " ";
            found = true;
        }
    }

    if (!found) {
        cout << "-1";
    }

    cout << '\n';

    return 0;
}
