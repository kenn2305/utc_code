#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a , b , c ;
    cin >> a >> b >> c;
    int res1 = abs(b-a);
    int res2 = abs(b-c);
    if ( res1 > res2){
        cout << "CAT_B" << endl ;
    } else if (res1 < res2){
        cout << "CAT_A" << endl ;
    } else {
        cout << "The mouse has escaped" << endl ;
    }
    return 0;
}