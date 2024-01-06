#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double a,b;
    cin >> a >> b;
    if (a>b){
        swap(a,b);
    }
    if (a==b) cout << "0.00%" << endl ;
    else {
        double k = b-a;
        double res = (k/a)*100;
        cout << fixed <<setprecision(2) << res << "%" << endl ;
    }
    return 0;
}