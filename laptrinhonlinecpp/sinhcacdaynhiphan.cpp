#include <iostream>
using namespace std;
int n , a[100] , oke;
//khoi tao bit dau tien
void make(){
    for ( int i =  1 ; i <= n ; i++){
        a[i] = 0;
    }
}
void make_more(){
    int i = n ;
    while (i >= 1 && a[i] == 1){
        a[i] = 0 ;
        i--;
    }
    if (i == 0){
        oke = 0; //check the final bit
    } else {
        a[i] = 1 ;
    }
}
int main(){
    cin >> n ;
    oke = 1 ;
    make();
    while (oke == 1){
        for ( int i = 1 ; i <= n ; i++){
            cout << a[i] ;
        }
        cout << endl ;
        make_more();
    }
    return 0;
}