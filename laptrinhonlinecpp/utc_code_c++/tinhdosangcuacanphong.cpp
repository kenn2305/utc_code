#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
    double n , m , k;
    cin >> n >> m >> k;
    double sum = 0 ;
    double first = n/m;
    sum = first * ((1-pow(1/m , k))/(1-(1/m)));
    cout << fixed << setprecision(6) << sum+n << endl ;
    return 0;
}