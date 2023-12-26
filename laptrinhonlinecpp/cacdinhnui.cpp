#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n ; cin >> n;
    int a[100];
    for ( int i = 0 ; i < n ; i++){
        cin >> a[i] ;
    }
    int cnt = 0 ;
    for ( int i = 1 ; i < n-1 ; i++){
        if (a[i] > a[i+1] && a[i] > a[i-1]){
            cnt++;
        }
    }
    cout << cnt << endl ;
    return 0;
}