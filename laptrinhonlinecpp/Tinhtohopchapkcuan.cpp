#include <iostream>
#include <climits>
#include <vector>
#define MOD 10000000+9
using namespace std;
using ll = long long ;
ll n,k;
ll a[1000][1000];
void tohop(){
    a[1][0] = 1;
    a[1][1] = 1;
    for ( int i = 2 ; i <= n ; i++){
        for ( int j = 0 ; j <= i ; j++){
            if (j == 0 || j == i) a[i][j]=1;
            else a[i][j] = a[i-1][j-1]+a[i-1][j];
        }
    }
}
int main(){
    int t ; cin >> t ;
    while (t--){
        cin >> n >> k ;
        if (a[n][k] > LONG_LONG_MAX){
            cout << a[n][k] % MOD << endl ;
        } else {
            cout << a[n][k] << endl ;
        }
    }
    return 0;
}