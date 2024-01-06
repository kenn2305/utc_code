#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n , x ;
    cin >> n >> x ;
    vector<int> a ;
    a.reserve(n);
    for ( int i = 0 ; i < n ; i++){
        int k ; cin >> k ;
        a.push_back(k);
    }
    for ( int i = 0 ; i < n/x +1 ; i++){
        int cnt = 0 ;
        for (int j = x-1 ; j >= cnt ; j--){
            cout << a[j] << " ";
        }
        if (x > n){
            break;
        }
        cnt = x;
        x+=x ;
    }
    return 0;
}