#include <iostream>
#include <cmath>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a[10000];
    int b[10000];
    int n ; cin >> n ;
    for ( int i = 0 ; i < n ; i++){
        cin >> a[i] >> b[i];
    }
    int Count = 0;
    for ( int i = 0 ; i < n ; i++){
        int k = a[i] - b[i];
        for ( int j = 0 ; j < n ; j++){
            if (a[j] - b[j] == k){
                Count++;
            }
        }
    }
    return 0;
}