#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main(){
    string s ; cin >> s ;
    string c ; cin >> c ;
    int cnt = 0 ;
    for ( int i = 0 ; i < s.length() ; i++){
        if (s[i] == c[i]){
            cnt++;
        }
    }
    cout << fixed << setprecision(1) << ((double)cnt/s.length())*10 << endl ;
    return 0;
}