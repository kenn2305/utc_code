#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    double a , b ,c ;
    cin >> a >> b >> c;
    double delta = pow(b,2)-4*a*c;
    if (a == 0 && b == 0 && c == 0){
        cout << "vo so nghiem" << endl ;
    } else {
        if (delta < 0 || (delta >= 0 && b/a >0 && c/a < 0)){
            cout << "vo nghiem" << endl ;
        } else if (delta == 0){
            double x1 = (-b+ sqrt(delta))/(2*a);
            double x2 = (-b- sqrt(delta))/(2*a);
            if (x1 < 0 && x2 < 0){
                cout << "vo nghiem" << endl ;
            } else if (x1 > 0 && x2 < 0){
                cout << fixed << setprecision(3) << sqrt(x1) << endl  << -sqrt(x1) << endl ;
            } else if (x1 > 0 && x2 == 0){
                cout << fixed << setprecision(3) << x2 << sqrt(x1) << endl  << -sqrt(x1) << endl ;
            } else if (x2 > 0 && x1 < 0){
                cout << fixed << setprecision(3) << sqrt(x2) << endl  << -sqrt(x2) << endl ;
            } else if (x2 > 0 && x1 == 0){
                cout << fixed << setprecision(3) << x1 << sqrt(x2) << endl  << -sqrt(x2) << endl ;
            } else if (x2 == 0 && x1 == 0){
                cout << fixed << setprecision(3) << x2 << endl ;
            } else if (x1 > 0 && x2 > 0){
                cout << fixed << setprecision(3)  << sqrt(x1) << endl  << -sqrt(x1) << endl << sqrt(x2) << endl  << -sqrt(x2) << endl ;
            }
        } else if (delta > 0){
            double x1 = (-b+ sqrt(delta))/(2*a);
            double x2 = (-b- sqrt(delta))/(2*a);
            if (x1 < 0 && x2 < 0){
                cout << "vo nghiem" << endl ;
            } else if (x1 > 0 && x2 < 0){
                cout << fixed << setprecision(3) << sqrt(x1) << endl  << -sqrt(x1) << endl ;
            } else if (x1 > 0 && x2 == 0){
                cout << fixed << setprecision(3) << x2 << sqrt(x1) << endl  << -sqrt(x1) << endl ;
            } else if (x2 > 0 && x1 < 0){
                cout << fixed << setprecision(3) << sqrt(x2) << endl  << -sqrt(x2) << endl ;
            } else if (x2 > 0 && x1 == 0){
                cout << fixed << setprecision(3) << x1 << sqrt(x2) << endl  << -sqrt(x2) << endl ;
            } else if (x2 == 0 && x1 == 0){
                cout << fixed << setprecision(3) << x2 << endl ;
            } else if (x1 > 0 && x2 > 0){
                cout << fixed << setprecision(3)  << sqrt(x1) << endl  << -sqrt(x1) << endl << sqrt(x2) << endl  << -sqrt(x2) << endl ;
            }
        }
    }
    return 0;
}