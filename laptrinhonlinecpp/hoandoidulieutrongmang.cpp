#include <iostream>
using namespace std;
int main(){
    int a[20];
    for ( int i = 0 ; i < 20 ; i++){
        cin >> a[i];
    }
    int j = 0 ;
    for ( int i = 20-1; i >= 0; i--){
        cout << "N[" << j << "] = " << a[i] << endl ;
        j++;
    }
    return 0;
}