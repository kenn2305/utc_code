#include <iostream>
using ll = long long ;
using namespace std;
int main(){
    ll n ; cin >> n ;
    ll day = n*2 ;
    ll dinh= 0 ;
    for (ll i= 1 ; i <= n-1 ; i++){
        dinh+=3*i;
    }
    cout << day+dinh << endl ;
    return 0;
}