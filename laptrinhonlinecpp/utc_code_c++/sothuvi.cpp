#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int Prime_Num(int n){
    if (n < 2){
        return 0;
    } else {
        for ( int i = 2 ; i <= sqrt(n) ; i++){
            if (n % i == 0){
                return 0;
            }
        }
    }
    return 1;
}
int res(int n){
    vector<int> a;
    for ( int i = 1 ; i < n ; i++){
        if (n % i == 0){
            a.push_back(i);
        }
    }

    for ( int i = 0 ; i < a.size() ; i++){
        if (Prime_Num(a[i])){
            if (Prime_Num(n/a[i])){
                return 1 ;
            }
        }
    }
    return 0;
}
int main(){
    int n ; cin >> n ;
    if(res(n)){
        cout << "true" << endl ;
    } else {
        cout << "false" << endl ;
    }
    return 0;
}