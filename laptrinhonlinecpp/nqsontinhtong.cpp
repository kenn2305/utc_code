#include <iostream>
#include <set>
#include <vector>
using namespace std;
using ll =long long ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n ;
    ll x ;
    cin >> n >> x ;
    vector<ll> a ;
    a.reserve(n);
    set<ll> s;
    for ( int i = 0 ; i < n ; i++){
        ll k ; cin >> k ;
        a.push_back(k);
        s.insert(k);
    }
    for ( int i = 0 ; i < n ; i++){
        ll q = x-a[i];
        auto it = s.find(q);
        if (it != s.end() && q != a[i]){
            if (a[i] > q){
                swap(a[i],q);
            }
            cout << a[i] << " " << q << endl ;
            return 0;
        }
    }
    return 0;
}