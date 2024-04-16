#include <iostream>
using namespace std;
long long solve(long long n){
    return n*(n-1)/2;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    long long n ; cin >> n ;
    long long cnt_odd = 0 ;
    long long cnt_even = 0 ;
    for ( int i = 0 ; i < n ; i++){
        long long x ; cin >> x ;
        if (x % 2 == 0) cnt_even++;
        else cnt_odd++;
    }
    cout << solve(cnt_odd)+ solve(cnt_even) << endl ;
    return 0;
}