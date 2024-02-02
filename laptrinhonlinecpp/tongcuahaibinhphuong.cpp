#include <iostream>
#include <cmath>
using namespace std;
int check(int n){
    int k = sqrt(n);
    for ( int i =  0 ; i < k ; i++){
        if ((i*i)+(k*k)==n){
            return 1 ;
        }
    }
    return 0;
}
int main(){
    int n ; cin >> n ;
    if (check(n)) cout <<"YES" << endl ;
    else cout << "NO" << endl ;
    return 0;
}