#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;
int check(int n , int k){
    int sum = 0 ;
    while (k != 0){
        sum += k % 10 ;
        k /= 10;
    }
    return sum == n ;
}
void solve(int n , int k){
    if (k > 9*n){
        cout << "-1" << endl ;
    } else {
        for (ll i = pow(10,n-1) ; i < pow(10,n) ; i++){
            if (check(k,i)){
                cout << i << endl ;
                break;
            }
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t ; cin >> t ;
    while (t--){
        int n , k ;
        cin >> n >> k;
        solve(n,k);
    }
    return 0;
}