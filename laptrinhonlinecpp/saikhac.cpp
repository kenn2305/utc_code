#include <iostream>
#include <cmath>
using namespace std;
using ll = long long ;
int main(){
    ll n ; cin >> n ;
    ll sum = 0 ;
    ll a[100000];
    for ( int i = 0 ; i < n; i++){
        cin >> a[i];
    }
    for ( int i = 0 ; i < n-1 ; i++){
        for ( int j = i+1 ; j < n ; j++){
            sum+=abs(a[i]-a[j]);
        }
    }
    cout << sum << endl ;
    return 0;
}