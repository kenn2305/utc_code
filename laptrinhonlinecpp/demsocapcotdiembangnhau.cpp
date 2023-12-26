#include <iostream>
#include <vector>
#include <map>
using ll = long long ;
using namespace std;
ll tohopchap(ll n){
    return (n*(n-1))/2;
}
int main(){
    ll n ; cin >> n ;
    vector<ll> a;
    a.reserve(n);
    map<ll,ll> mp;
    for ( ll i = 0 ; i < n ; i++){
        ll x ; cin >> x ;
        a.push_back(x);
    }
    ll sum = 0 ;
    for ( auto it : a){
        mp[it]++;
    }
    for (pair<ll,ll> it : mp){
        if (it.second > 1){
            sum+= tohopchap(it.second);
        }
    }
    cout << sum << endl ;
    return 0;
}