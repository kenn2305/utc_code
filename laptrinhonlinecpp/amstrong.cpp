#include <iostream>
#include <cmath>
using namespace std;
bool Astrongcheck(int n){
    int m = n ;
    int sum = 0 ;
    while (n != 0){
        sum += pow(n%10 , 3);
        n /= 10;
    }
    return sum == m ;
}
int main(){
    int n ; cin >> n ;
    if (Astrongcheck(n)) cout << "YES" ;
    else cout << "NO";
    return 0;
}