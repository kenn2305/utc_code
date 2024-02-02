#include <iostream>
#include <set>
#include <vector>
using namespace std;
void solve(vector<int> a , int x){
    for ( int i = 0 ; i < a.size() ; i++){
        if (a[i]-x <= 0){
            cout << i+1 << endl ;
            break;
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n ; cin >> n ;
    int t ; cin >> t ;
    vector<int> a;
    vector<int> b;
    b.reserve(t);
    a.reserve(n);
    for ( int i = 0 ; i < n ; i++){
        int x ; cin >> x ;
        a.push_back(x);
    }
    for ( int i = 0 ; i < t ; i++){
        int x ; cin >> x;
        b.push_back(x);
    }
    for ( int i = 0 ; i < t ; i++){
        solve(a,b[i]);
    }
    return 0;
}