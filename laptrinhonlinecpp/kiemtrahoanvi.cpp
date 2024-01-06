#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int check_dif(vector<int> a, int n){
    for (int i = 0 ; i < n-1;i++)
        if (a[i+1]-a[i]!=1) return 0;
    return 1;
}
int main(){
    int n ; cin >> n ;
    vector<int> a ;
    a.reserve(n);
    for ( int i = 0 ; i < n; i++){
        int x ; cin >> x;
        a.push_back(x);
    }
    sort(a.begin(),a.end());
    if (check_dif(a,n)) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}