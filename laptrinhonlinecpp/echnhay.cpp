#include <iostream>
#include <vector>
#define endl '\n';
using namespace std;
void solve(int n){
    int a[n];
    for (int i = 0 ; i < n ; ++i) cin >> a[i];
    int max_res = 0 ;
    for ( int i = 0 ; i < n ; ++i){
        int present = a[max_res];
        max_res+=present;
        if (max_res == n-1){
            cout << "True" ;
            return;
        }
    }
    cout << "False";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t ; cin >> t ;
    while (t--){
        int n ; cin >> n ;
        solve(n);
        cout << endl ;
    }
    return 0;
}