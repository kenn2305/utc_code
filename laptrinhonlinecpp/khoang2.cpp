#include <iostream>
using namespace std;
int main(){
    int t ; cin >> t ;
    int in = 0 ;
    int out = 0 ;
    while (t--){
        int x ; cin >> x ;
        if (x < 10 || x > 20){
            out++;
        } else if (x >= 10 && x <= 20){
            in++;
        }
    }
    cout << in << " trong" << endl ;
    cout << out << " ngoai" << endl ;
    return 0;
}