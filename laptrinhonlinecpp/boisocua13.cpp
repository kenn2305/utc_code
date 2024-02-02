#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long x , y ;
    cin >> x >> y  ;
    long long res = 0 ;
    for ( long long i = x ; i <= y ; i++){
        if (i % 13 != 0){
            res+=i ;
        }
    }
    cout << res << endl ;
    return 0;
}