#include <iostream>
using ll = long long;
using namespace std;
bool check(ll a , ll b){
    ll tmp = a;
    if (a==1 && b != 1) return 0;
    while (a <= b){
        if ( a == b ){
            return 1 ;
        }
        a*=tmp;
    }
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t ; cin >> t ;
    while (t--){
        ll a,b ;
        cin >> a >> b ;
        if (check(a,b)==true) cout << "YES" << endl ;
        else cout << "NO" << endl ;
    }
    return 0;
}