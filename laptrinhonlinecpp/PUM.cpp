#include <iostream>
using namespace std;
int main(){
    int n ; cin >> n;
    int i = 1 ;
    int lim = 1;
    while (lim <= n){
        for (int j = i ; j <= i+2 ; j++){
            cout << j << " " ;
        }
        cout << "Nam" << endl ;
        i+=4;
        lim++;
    }
    return 0;
}