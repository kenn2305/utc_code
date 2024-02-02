#include <iostream>
using namespace std;

const int MOD = 1000000009;

long long addMod(int a, int b) {
    return (a + b) % MOD;
}

int sumOfFibonacci(int n) {
    if (n <= 1) {
        return n;
    }

    int prev = 0;
    int curr = 1;
    long long sum = curr;

    for (int i = 2; i <= n; ++i) {
        long long next = addMod(prev, curr);
        sum = addMod(sum, next);
        prev = curr;
        curr = next;
    }

    return sum;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;

    int result = sumOfFibonacci(n);
    cout << result << endl;

    return 0;
}
