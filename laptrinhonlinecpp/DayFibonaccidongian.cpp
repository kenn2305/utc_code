#include <iostream>
using namespace std;
using ll =long long ;
int main(){
    int n ; cin >> n ;
    ll first = 0 ;
    ll second = 1;
    for (int i = 0 ; i < n ; i++){
        cout << first << " " ;
        ll res = first+second;
        first=second;
        second=res;

    }
    return 0;
}