#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    float a,b,c;
    cin >> a >> b >> c ;
    cout << fixed << setprecision(1) << "Trung binh = " << (2*a+3*b+5*c)/10.0 << endl ;
    return 0;
}