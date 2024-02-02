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
    int k = n/x ;
    if (k == 1){
        for ( int i = x-1 ; i >= 0 ; i--){
            cout << a[i] << " ";
        }
        for ( int i = n-1 ; i >= x ; i--){
            cout << a[i] << " " ;
        }
    } else {
        int l = 0 ;
        int r = x ;
        while (k--){
            for ( int i = r-1 ; i>=l ;i--){
                cout << a[i] << " ";
            }
            l = r ;
            r+=x;
        }
        r-=x;
        for ( int i = n-1 ; i >= r ; i--){
            cout << a[i] << " ";
        }
    }
    return 0;
}