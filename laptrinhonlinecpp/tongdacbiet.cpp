#include <iostream>
using namespace std;
using ll = long long ;
const int MOD = 1e9+7;
ll res(int n){
    ll first_digit = 1 ;
    ll last_digit = ((n*n)-(n-1)*(n-1));
    ll cnt = ((last_digit-first_digit)/2) + 1;
    return (((first_digit+last_digit)*cnt )/2)%MOD ;
}
int main(){
    int t ; cin >> t ;
    while (t--){
        int x ; cin >> x ;
        cout << res(x) << endl ;
    }
    return 0;
}