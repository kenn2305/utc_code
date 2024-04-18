#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
using ll = long long ;
unordered_map<ll,unordered_map<ll,ll>> save ;
ll ways(ll n , ll k , vector<ll> &a){
    if (n == 0) return 1 ;
    if (n < 0 || k == 0) return 0;

    if (save.find(n) != save.end() && save[n].find(k) != save[n].end()){
        return save[n][k];
    }
    ll res  = ways(n-a[k-1],k,a) + ways(n , k-1 , a);
    save[n][k] = res;
    return res;
}
int main(){
    ll n , k ;
    cin >> n >> k ;
    vector<ll> a(k);
    for ( int i = 0 ; i < k ; ++i) cin >> a[i];
    cout << ways(n,k,a) << '\n' ;
    return 0;
}