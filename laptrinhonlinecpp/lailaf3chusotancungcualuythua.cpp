#include <iostream>
using namespace std;

long long res1(long long n, long long m) {
    long long res = 1;
    for (long long i = 1; i <= m; i++) {
        res *= n;
        res %= 1000;  // Corrected line to store the result after taking modulo
    }
    return res;
}

int main() {
    long long n, m;
    cin >> n >> m;
    cout << res1(n, m) << endl;
    return 0;
}
