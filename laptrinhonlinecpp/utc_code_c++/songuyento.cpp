#include <iostream>
#include <cmath>
using ll = long long;
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n ; cin >> n;
    bool check = true;
    if ( n < 2 ){
            check = false;
    } else {
        for ( ll i = 2 ; i <= sqrt(n) ; i++){
            if(n % i == 0){
                check = false;
            }
        }
    }
    if(check == true ){
        cout << "YES" << endl ;
    } else {
        cout << "NO" << endl ;
    }
    return 0;
}