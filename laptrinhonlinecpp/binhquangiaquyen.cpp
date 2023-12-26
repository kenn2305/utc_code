#include <iostream>
#include <iomanip>
using namespace std;
void res(double a, double b , double c){
    cout << fixed << setprecision(1) << (a*2+b*3+c*5)/10 << endl ;
}
int main(){
    int n ; cin >> n ;
    double a[100];
    double b[100];
    double c[100];
    for ( int i = 0 ; i < n ; i++){
        cin >> a[i] >> b[i] >> c[i] ;
    }
    for ( int i = 0 ; i < n ; i++){
        res(a[i],b[i],c[i]);
    }
    return 0;
}