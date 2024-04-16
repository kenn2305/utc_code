#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n ; cin >> n ;
    int a[n];
    int maxval = -101;
    int minval = 101;
    int sum = 0 ;
    for ( int i = 0 ; i < n ; i++){
        cin >> a[i];
        maxval = max(a[i],maxval);
        minval = min(a[i],minval);
    }
    int ins = (minval+maxval)/n ;
    long long finalres = 1000000000 ;
    for ( int i = minval ; i <= maxval ; i++){
        long long res = 0 ;
        for ( int j = 0 ; j < n ; j++){
            res += pow(a[j]-ins,i);
        }
        finalres = min(res,finalres);
    }
    cout << finalres << endl ;
    return 0;
}