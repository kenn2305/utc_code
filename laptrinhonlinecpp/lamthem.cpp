#include <iostream>
using namespace std;
int main(){
    int n ; cin >> n ;
    long long luong = 1 ;
    for ( int i = 2 ; i <= n ; i++){
        luong*=i*1;
    }
    cout << luong << endl ;
    return 0;
}