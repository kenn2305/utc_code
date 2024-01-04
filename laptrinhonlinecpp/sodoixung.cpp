#include <iostream>
using namespace std;
using ll = long long ;
ll rev_num(ll a){
    ll n = a ;
    ll res = 0 ;
    while (a!=0){
        res = res*10 + a%10;
        a/=10;
    }
    return res == n;
}
int main(){
    ll a ; cin >> a;
    if (rev_num(a)) cout << "YES" << endl ;
    else cout << "NO" << endl ;
    return 0;
}