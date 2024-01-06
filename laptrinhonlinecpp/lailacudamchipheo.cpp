#include <iostream>
using namespace std;
const int MOD = 1e9 + 7;

void solve(long long n) {
    long long res = 0;
    for (int i = 1; i <= n; i++) {
        res += (res + i) % MOD;
    }
    cout << res << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x;
        cin >> x;
        solve(x);
    }
    return 0;
}
