#include <iostream>
#include <cmath>
using namespace std;
int square_res(long long n){
    long long x = sqrt(n);
    return x*x == n ;
}
int main(){
    int a ,b ,c ,d ;
    cin >> a >> b >> c >> d ;
    long long area = (a*b)+(c*d);
    if (square_res(area)){
        cout << "YES" << endl ;
    } else {
        cout << "NO" << endl ;
    }
    return 0;
}