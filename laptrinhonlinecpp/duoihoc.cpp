#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n ; cin >> n ;
    vector<int> a;
    for ( int i = 0 ; i < n ; i++){
        int x ; cin >> x ;
        a.push_back(x);
    }
    int dem = 0 ;
    for ( int i = 0 ; i < n ; i++){
        int cnt = 0 ;
        for ( int j = 0 ; j < i ; j++){
            if (a[j] < a[i]){
                cnt++;
            }
        }
        if (cnt == i){
            cout << a[i] << endl;
            dem++;
        }
    }
    if (dem == n-1){
        cout << "-1" << endl ;
    }
    return 0;
}