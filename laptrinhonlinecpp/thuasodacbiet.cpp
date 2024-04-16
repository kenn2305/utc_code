#include <iostream>
#include <cmath>

using namespace std;
using ll = long long ;
void res(ll n) {
    ll count = 0;
    for (ll i = 1; i <= n; i++) {
        ll zero = 0;
        ll num = i;
        while (num > 0) {
            zero++;
            num /= 10;
        }
        ll n1 = (i + 1) * pow(10, zero);
        ll n2 = (i + 2) * pow(10, zero);
        if (n1 % i == 0 && n2 % i == 0) {
            count++;
        }

    }

    cout << count;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin >> t;
    ll i = 1;
    while (t--) {
        int n;
        cin >> n;
        cout << "#Case " << i << ": ";
        res(n);
        i++;
        cout << endl;
    }
}