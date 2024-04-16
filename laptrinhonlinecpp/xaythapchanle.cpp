#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long ;
int cmp (ll a , ll b){
    return a > b ;
}
int main(){
    int n ; cin >> n ;
    ll a[n];
    ll maxval = 0;
    for ( int i = 0 ; i < n ; i++){
        cin >> a[i] ;
        maxval = max(a[i],maxval);
    }
    ll b[maxval+1];
    for ( int i = 0 ; i <= maxval ; i++){
        b[i] = (i % 2 == 0) ? 1 : 0 ;
    }
    sort(a,a+n,cmp);
    ll res = a[0];
    for ( int i = 0 ; i < n-1 ; i++){
        if (b[a[i]] == 0 && b[a[i+1]] == 1){
            res+=a[i+1];
        } else if (b[a[i]] == 1 && b[a[i+1]] == 0){
            res+=a[i+1];
        }
    }
    cout << res << endl ;
    return 0;
}