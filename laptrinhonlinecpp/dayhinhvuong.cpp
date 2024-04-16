#include <iostream>
const int MOD = 1e9+7;
using ll = long long ;
using namespace std;
int main(){
    ll n , m ;
    cin >> n >> m ;
    ll res = 0;
    for ( int i = 0 ; i < n ; i++){
        m = (m*4)%MOD;
        res = (res+m)%MOD;
    }
    cout << res+1 << endl ;
    return 0;
}