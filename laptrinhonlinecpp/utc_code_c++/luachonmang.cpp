#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
int main(){
    vector<double> a(100);
    for ( int i = 0 ; i < 100 ; i++){
        cin >> a[i];
    }
    for ( int i = 0 ; i < 100 ; i++){
        if (a[i] <= 10){
            if (a[i] == static_cast<int>(a[i])){
                cout << "A" << "[" << i << "] " << "= " << a[i] << endl ;
            } else {
                cout << fixed << setprecision(1) << "A" << "[" << i << "] " << "= " << a[i] << endl ;
            }
        }
    }
    return 0;
}