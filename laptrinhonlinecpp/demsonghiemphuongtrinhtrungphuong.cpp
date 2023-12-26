#include <iostream>
#include <cmath>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    double a , b , c ;
    cin >> a >> b >> c ;
    double delta = pow(b,2) - 4*a*c;
    if ( a== 0 && b == 0 && c == 0){
        cout << "-1" << endl ;
    } else if (c== 0 && b/a <= 0){
        cout << "1" << endl ;
    } else if ((delta == 0 && b/a <0) || (delta >0 && c/a < 0)){
        cout << "2" << endl ;
    } else if (c == 0 && b / a < 0){
        cout << "3" << endl ;+
    } else if (delta > 0 && b/a < 0 && c/a >0){
        cout << "4" << endl ;
    } else if (delta < 0 || (delta >= 0 && b/a > 0 && c/a < 0)){
        cout << "0" << endl ;
    }
    return 0;
}