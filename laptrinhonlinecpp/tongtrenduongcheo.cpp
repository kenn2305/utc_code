#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n ; cin >> n ;
    int a[1000][1000];
    for ( int i = 0 ; i < n ; ++i){
        for (int j = 0 ; j < n ; ++j){
              cin >> a[i][j];
        }
    }
    for ( int i = n-1 ; i >= 0 ; --i){
        int k = i ;
        int j = 0 ;
        long long sum = 0 ;
        while (k < n){
            sum+=a[j][k];
            ++k;
            ++j;
        }
        cout << sum << endl ;
    }
    for ( int i = 1 ; i < n ; ++i){
        int k = i ;
        int j = 0 ;
        long long sum = 0 ;
        while (k < n){
            sum+=a[k][j];
            ++k;
            ++j;
        }
        cout << sum << endl ;
    }
    return 0;
}