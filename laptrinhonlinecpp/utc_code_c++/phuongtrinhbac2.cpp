#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
    double a,b,c;
    cin >> a >> b >> c ;
    double delta = pow(b,2) - 4*(a*c);
    if (a == 0 && b == 0 && c == 0){
        cout << "vo so nghiem" << endl ;
    }else if (a== 0 && b != 0 && c != 0){
        double x = -c/b;
        cout << fixed << setprecision(3) << x << endl ;
    } else if (delta > 0){
        double x1 = (-b+ sqrt(delta))/(2*a);
        double x2 = (-b- sqrt(delta))/(2*a);
        cout << fixed << setprecision(3) << x2 << endl << x1 << endl ;
    } else if (delta == 0){
        double x = -b/(2*a);

    } else if (delta < 0){
        cout << "vo nghiem" << endl ;
    }
    return 0;
}