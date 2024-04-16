#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
    int n ; cin >> n ;
    vector<int> a ;
    for ( int i = 0 ; i < n ; i++){
        int x ; cin >> x ;
        a.push_back(x);
    }
    sort(a.begin(),a.end());
    int x = a[a.size()/2];
    long long res = 0 ;
    for ( int i = 0 ; i < n ; i++){
        res+=abs(a[i]-x);
    }
    cout << res << endl ;
    return 0;
}