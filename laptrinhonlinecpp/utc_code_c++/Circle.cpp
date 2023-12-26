#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
    double r ; cin >> r ;
    if (r < 0){
        cout << "NO CIRCLE" << endl ;
    } else {
        double dientich = pow(r,2)*3.14159265359;
        double chuvi = (3.14159265359*r)+(3.14159265359*r);
        cout << fixed << setprecision(2) << chuvi << endl << dientich << endl ;
    }
    return 0;
}