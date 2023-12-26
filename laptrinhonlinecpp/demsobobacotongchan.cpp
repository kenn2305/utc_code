#include <iostream>
#include <vector>
using ll = long long ;
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n ; cin >> n ;
    vector<ll> a(n);
    for ( ll i = 0 ; i < n ; i++){
        cin >> a[i] ;
    }
    ll demc = 0 ;
    ll deml = 0 ;
    for (auto it : a){
        if (it % 2 == 0){
            demc++;
        } else {
            deml++;
        }
    }
    cout << ((demc*(demc-1)*(demc-2)/6) + (deml*(deml-1)/2) * demc) << endl ;
    return 0;
}