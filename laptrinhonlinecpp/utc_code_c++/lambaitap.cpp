#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a , b ,c ,d ;
    cin >> a >> b >> c >> d ;
    if ( a < c ){
        if ( b == d || b > d){
            cout << d - c << endl ;
        } else if ( d > b ){
            cout << b - c << endl ;
        } else if ( c >= b){
            cout << "0" << endl ;
        }
    } else if (a > c){
        if (d == b || b < d){
            cout << b-a << endl ;
        } else if (b > d){
            cout << d-a << endl ;
        } else if (a >= d){
            cout << "0" << endl ;
        }
    } else if ( a == c){
        if (b < d){
            cout << b-a << endl ;
        } else if ( b > d){
            cout << d-c << endl ;
        } else if ( b==d){
            cout << b-a << endl ;
        }
    } else if (a > d || c > b){
        cout << "0" << endl ;
    }
    return 0;
}