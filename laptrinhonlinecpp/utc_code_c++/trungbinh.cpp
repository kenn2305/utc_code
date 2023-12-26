#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    double a , b ;
    cin >> a >> b ;
    cout << fixed << setprecision(5) << "Trung binh = " << a*(3.5/11) + b*(7.5/11) << endl ;
    return 0;
}