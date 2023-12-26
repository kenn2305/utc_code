#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int cmp(int a , int b){
    if (a < b){
        return 1 ;
    }
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n  ; cin >> n ;
    vector<int> a;
    for ( int i = 0 ; i < n ; i++){
        int x ; cin >> x ;
        a.push_back(x);
    }
    int m ; cin >> m;
    for ( int i = 0 ; i < m ; i++){
        int x ; cin >> x ;
        a.push_back(x);
    }
    sort(a.begin() , a.end() , cmp);
    for ( auto it : a){
        cout << it << " " ;
    }
    return 0;
}