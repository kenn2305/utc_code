#include <iostream>
using namespace std;
int res_(int n ){
    if (n == 1){
        return 1 ;
    } else if (n==2){
        return 2 ;
    } else if (n==3){
        return 4;
    } else {
        return res_(n-1)+ res_(n-2)+ res_(n-3);
    }
}
int main(){
    int n ; cin >> n ;
    cout << res_(n) << endl ;
    return 0;
}