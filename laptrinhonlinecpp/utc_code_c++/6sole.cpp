#include <iostream>
using namespace std;
int Odd_NUM(int n){
    return n % 2 != 0;
}
int main(){
    int n ; cin >> n ;
    int cnt = 0 ;
    while(true){

        if (Odd_NUM(n)){
            cout << n << endl ;
            cnt++;
        }
        n++;
        if (cnt == 6) {
            break;
        }
    }
    return 0;
}