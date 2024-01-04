#include <iostream>
using namespace std;
int main(){
    int a, b ,c ,d ;
    cin >> a >> b >> c >> d;
    int k = abs(a-c);
    int q = 0 , n =  0;
    int res ;
    for ( int i = 0 ; i < k ; i++){
        for ( int j = 0 ; j < k ; j++){
            res = abs(i*b-j*k);
        }
        if (res >= k){
            break;
        }
    }
    cout << res << endl ;
    return 0;
}