#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main(){
    string s ;
    int t ; cin >> t ;
    while (t--){
        cin >> s ;
        cout << fixed << setprecision(2) << s.length()*(1/100.0) << endl ;
    }
    return 0;
}