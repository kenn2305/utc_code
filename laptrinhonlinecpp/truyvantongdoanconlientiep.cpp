#include <iostream>
#include <vector>
using namespace std;
using ll = long long;
int main(){
    ll n , m ;
    scanf("%lld%lld",&n,&m);
    vector<ll> a(n+1);
    vector<ll> prefix(n+1);
    prefix.resize(n+1,0);
    for ( ll i = 1 ; i <= n ; i++){
        scanf("%lld",&a[i]);
        prefix[i] = prefix[i-1]+a[i];
    }
    while (m--){
        ll l , r ;
        scanf("%lld%lld",&l,&r);
        ll sum = 0 ;
        sum = prefix[r] - prefix[l-1];
        printf("%lld\n",sum);
    }
    return 0;
}