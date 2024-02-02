#include <iostream>
#include <string>
const int MOD = 1e9+7;
using namespace std;
long long giaithua(int n){
    int res = 1 ;
    for ( int i = 1 ; i <= n ; i++){
        res = (res*i)%MOD;
    }
    return res ;
}
string check(int n){
    string s = to_string(n);
    if (s.length()==9) return s;
    while (true){
        s = "0"+s ;
        if (s.length()==9){
            return s ;
        }
    }
}
int main(){
    int n ; cin >> n ;
    long long k = giaithua(n);
    cout << check(k) << endl ;
    return 0;
}