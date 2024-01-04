#include <iostream>
#include <climits>
const long long MOD = 1000000007 ;
using namespace std;
int main(){
    int n ; cin >> n ;
    long long res = 1;
    for ( int i =  1 ; i < n ; i++){
        res*=i;
    }
    if(res > LONG_LONG_MAX){
        cout << res%MOD << endl ;
    } else {
        cout << res << endl ;
    }
    return 0;
}