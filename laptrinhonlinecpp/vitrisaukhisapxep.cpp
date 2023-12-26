#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n ; cin >> n ;
    vector<int> a;
    a.reserve(n);
    vector<pair<int,int>> v;
    for ( int i = 0 ; i < n ; i++){
        int x ; cin >> x ;
        a.push_back(x);
    }
    for ( int i = 0 ; i < n ; i++){
        v.push_back(make_pair(a[i],i+1));
    }
    sort (v.begin() , v.end());
    for (pair<int,int> it : v) {
        cout << it.second << " " ;
    }
    return 0;
}