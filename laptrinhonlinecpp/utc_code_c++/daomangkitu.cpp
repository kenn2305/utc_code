#include <iostream>
#include <string>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n ; cin >> n ;
    char a[60000];
    for ( int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    for ( int i = n-1 ; i >= 0 ; i--){
        cout << a[i];
    }
    return 0;
}