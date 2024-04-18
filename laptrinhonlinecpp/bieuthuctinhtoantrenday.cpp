#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
using ll = long long ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n ; cin >> n ;
    int tmp = n;
    vector<int> a(n);
    for ( int i = 0 ; i < n ; ++i){
        cin >> a[i];
    }
    ll res1 = 0 ;
    ll res2 = 0 ;
    ll res3 = 0 ;
    for ( int i = 0 ; i < n ; ++i){
        res1+=pow(a[i],2);
        res2+=a[i]*a[tmp-1];
        tmp--;
    }
    for ( int i = 0 ; i < n -1 ; ++i){
        res3+=a[i]*a[i+1];
    }
    cout << res1 << '\n' << res2 << '\n' << res3 << '\n' ;
    return 0;
}