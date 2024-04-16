#include <iostream>
#include <cmath>
using ll = long long;
const ll MOD = 1e9 + 7;
using namespace std;

ll res(ll n) {
    ll sum = 0;
    for (ll i = 0; i <= sqrt(n); i++) {
        if (i * i % 3 == 1 ) {
            sum = (sum % MOD + i * i % MOD) % MOD;
        }
    }
    return sum;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        cout << res(n) << endl;  // Print the result
    }
    return 0;
}
