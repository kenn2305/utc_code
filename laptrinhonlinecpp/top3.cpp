#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int tmp(int a , int b){
    return a >= b ;
}
int main(){
    int n ; cin >> n ;
    vector<int> a ;
    for ( int i = 0 ; i < n; i++){
        int x; cin >> x;
        a.push_back(x);
    }
    for ( int i = 0 ; i < n-2 ; i++){
        sort(a.begin(),a.end());
        cout << a[2] << " " << a[1] << " " << a[0] << endl ;
        a.erase(a.begin()+0);
    }
    return 0;
}