#include <iostream>
using ll = long long ;
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n ; cin >> n ;
    for ( ll i = 1 ; i <= n ; i++){
        if (n%i==0){
            cout << i << endl ;
        }
    }
    return 0;
}