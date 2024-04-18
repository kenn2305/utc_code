#include <iostream>
#include <vector>
using namespace std;
using ll = long long;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n ; cin >> n ;
    vector<ll> a(5,0);
    for ( int i = 0 ; i < n ; ++i){
        ll x ; cin >> x ;
        ++a[x];
    }
    ll res = a[4];
    res += a[1]/4;
    a[1]%=4;
    if
    return 0;
}