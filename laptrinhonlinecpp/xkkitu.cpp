#include <iostream>
#include <string>
using namespace std;
void solve(int n , string k){
    int i = 0 ;
    while (i < k.length()){
        for ( int j = 0 ; j < n ; ++j){
            cout << k[i] ;
        }
        ++i;
    }
}
int main(){
    int t ; cin >> t ;
    while (t--){
        int n ; cin >> n ;
        string s ; cin >> s;
        solve(n,s);
        cout << endl ;
    }
    return 0;
}