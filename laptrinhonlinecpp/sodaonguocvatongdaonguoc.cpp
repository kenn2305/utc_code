#include <iostream>
using namespace std;
int rev_digit(int n){
    int res = 0 ;
    while (n != 0){
        res = res*10 + n%10;
        n/=10 ;
    }
    return res;
}
int rev_sum(int a , int b){
    int sum = rev_digit(a)+ rev_digit(b);
    return rev_digit(sum);
}
int main(){
    int t ; cin >> t ;
    while (t--){
        int x , y ;
        cin >> x >> y ;
        cout << rev_sum(x,y) << endl ;
    }
    return 0;
}