#include <iostream>
using namespace std;
void check(int n){
    if (n==0){
        cout << "NULL" << endl ;
    } else {
        if (n%2==0){
            if (n > 0){
                cout << "EVEN POSITIVE" << endl ;
            } else {
                cout << "EVEN NEGATIVE" << endl ;
            }
        } else if (n%2!=0){
            if (n > 0){
                cout << "ODD POSITIVE" << endl ;
            } else {
                cout <<  "ODD NEGATIVE" << endl ;
            }
        }
    }
}
int main(){
    int n ; cin >> n ;
    int a[n];
    for ( int i = 0 ; i < n ; i++){
        cin >> a[i] ;
    }
    for ( int i = 0 ; i < n ; i++){
        check(a[i]);
    }
    return 0;
}