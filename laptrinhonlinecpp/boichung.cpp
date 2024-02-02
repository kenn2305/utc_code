#include <iostream>
#include <cmath>
using namespace std;
using ll = long long ;
ll gcd(ll a , ll b){
    while (b!=0){
        ll tmp = b ;
        b = a % b ;
        a = tmp ;
    }
    return a ;
}
ll lmc(ll a , ll b){
    return (a*b)/ gcd(a,b);
}
ll lmc_of_3num(ll a, ll b , ll c){
    return lmc(lmc(a,b),c);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n ; cin >> n ;
    ll a = n-1;
    ll b = n-2;
    cout << lmc_of_3num(a,b,n) << endl ;
    return 0;
}