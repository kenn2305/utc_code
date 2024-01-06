#include <iostream>
using namespace std;
int main(){
    int n ; cin >> n ;
    int a[n];
    int x ; cin >> x ;
    long long res = 0 ;
    for ( int i = 0 ; i < n; i++){
        cin >> a[i];
    }
    int money = 3*x;
    for ( int i = 0 ; i < n ; i++){
        res+=(a[i]/x)*money;
    }
    cout << res << endl ;
    return 0;
}