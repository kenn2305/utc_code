#include <iostream>
using namespace std;
int main(){
    int n ; cin >> n ;
    for ( int i = 0 ; i <= n ; i++){
        long long num = 1 ;
        cout << num << " ";
        for (int j = 1 ; j <= i ; j++){
            num=num*(i-j+1)/j;
            cout << num << " " ;
        }
        cout << endl ;
    }
    return 0;
}