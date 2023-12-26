#include <iostream>
#include <cmath>
using ll = long long ;
using namespace std;
int main(){
    ll a , b ,c ;
    cin >> a >> b >> c ;
    int Max = max(max(a,b),c);
    if (Max == a+b || Max == a+c || Max == c+b){
        cout << "YES" << endl ;
    } else if ((a%2==0 && b == c) || (b % 2 == 0 && a == c) ||(c%2 == 0 && a == c)){
        cout << "YES" << endl ;
    }
    else {
        cout << "NO" << endl ;
    }
    return 0;
}