#include <iostream>
using namespace std;
using ll = long long ;
ll res(ll n , ll x){
    ll k = 1;
    for ( ll i = 1 ; i <= x ;i++){
        k*=i;
    }
    return k==n;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n ; cin >> n ;
    for ( ll i = 0 ; i <= n ; i++){
        if (res(n,i)){
            cout << i << endl ;
            break;
        }
    }
    return 0;
}