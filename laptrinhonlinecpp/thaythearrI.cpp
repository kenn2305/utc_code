#include <iostream>
using namespace std;
int main(){
    int n =10 ;
    int a[n];
    for ( int i = 0 ; i < n ; i++){
        cin >> a[i];
        if (a[i] <= 0) a[i] = 1 ;
    }
    for ( int i = 0 ; i < n ; i++){
        cout << "X[" << i << "] = " << a[i] << endl ;
    }
    return 0;
}