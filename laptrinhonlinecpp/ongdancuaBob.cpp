#include <iostream>
using namespace std;
int main(){
    int n ; cin >> n ;
    int a[10000];
    int b[10000];
    for ( int i = 0 ; i < n ; i++){
        cin >> a[i] >> b[i];
    }
    for ( int i = 0 ; i < n ; i++){
        cout << a[i]+b[i] << endl;
    }
    return 0;
}