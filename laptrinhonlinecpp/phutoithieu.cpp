#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using ll = long long ;
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int l , k ;
    cin >> l >> k;
    int n ; cin >> n ;
    vector<int> a(n);
    vector<int> mark(l,0);
    for ( int i = 0 ; i < n ; ++i){
        cin >> a[i];
        mark[a[i]-1] = 1;
    }
    sort(a.begin(),a.end());
    int first_point = 0 ;
    int res = 0 ;
    int i = 0 ;
    while (i < l){
        int cnt = 0 ;
        if (mark[i] == 1) res+=mark[i];
        ++cnt;
        if (cnt == 3){
            first_point = i ;
        }
        ++i;

    }
    return 0;
}