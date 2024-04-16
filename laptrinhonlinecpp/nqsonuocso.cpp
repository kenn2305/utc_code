#include <iostream>
#include <bitset>
#include <cmath>

using namespace std;
using ll = long long;
const ll MAX1 = 1000000000000 + 1;
bitset<MAX1> save;

void get_num() {
    save.set(); // Set all bits to 1

    save[0] = save[1] = 0;
    for (ll i = 2; i * i <= MAX1; i++) {
        if (save[i]) {
            for (ll j = i * i; j <= MAX1; j += i) {
                save[j] = 0;
            }
        }
    }
}

int main() {
    ll n;
    cin >> n;
    ll sum = 0;
    get_num();

    for (ll i = 1; i <= n; i++) {
        if (n % i == 0 && !save[i]) {
            sum += i;
        }
    }

    cout << sum << endl;
    return 0;   
}
