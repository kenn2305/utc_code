#include <iostream>
using namespace std;
bool check(int a){
    int sum = 0 ;
    for ( int i = 1 ; i < a ; i++){
        if (a%i==0){
            sum+=i;
        }
    }
    return sum > a;
}
int main(){
    int n ; cin >> n ;
    if (n < 1) cout << "Poor Number" << endl ;
    else if (check(n)) cout << "Rich Number" << endl ;
    else cout << "Poor Number" << endl ;
    return 0;
}

// 1/1/2024