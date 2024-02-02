#include <iostream>
using namespace std;
int main(){
    int n ; cin >> n ;
    int tmp = 1 ;
    int c1 = 0 ;
    int c2 = n-1 ;
    int h1 = 0;
    int h2 = n-1 ;
    while (c1 <= c2){
        for ( int i = c1 ; i <= c2 ; i++){
            tmp++;
            cout << tmp << " " ;
        }
        cout << endl ;
        
    }
    return 0;
}