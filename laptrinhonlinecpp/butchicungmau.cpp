#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int n ; cin >> n ;
    char x ; cin >> x ;
    double a[12][12];
    for ( int i = 0 ; i < 12 ; ++i){
        for ( int j = 0 ; j < 12 ; ++j){
            cin >> a[i][j];
        }
    }
    double sum = 0 ;
    for ( int i = 0 ; i < 12 ; ++i){
        sum += a[n][i];
    }
    if (x == 'S') cout << fixed << setprecision(1) << sum << endl ;
    else cout << fixed << setprecision(1) << sum/12 << endl;
    return 0;
}