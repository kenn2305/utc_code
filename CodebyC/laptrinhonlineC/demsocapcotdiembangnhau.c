#include <stdio.h>
#include <stdlib.h>

typedef long long ll;

ll tohopchap(ll n) {
    return (n * (n - 1)) / 2;
}

int main() {
    ll n;
    scanf("%lld", &n);

    ll *a = (ll*)malloc(n * sizeof(ll));
    ll *mp = (ll*)calloc(100001, sizeof(ll));

    for (ll i = 0; i < n; i++) {
        ll x;
        scanf("%lld", &x);
        a[i] = x;
        mp[x]++;
    }

    ll sum = 0;

    for (ll i = 0; i < 100001; i++) {
        if (mp[i] > 1) {
            sum += tohopchap(mp[i]);
        }
    }

    printf("%lld\n", sum);

    free(a);
    free(mp);

    return 0;
}
