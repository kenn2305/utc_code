#include <iostream>
using namespace std;
int retangle(int a, int b , int c){
    return a < b+c && b < a+c && c < a+b;
}
int main(){
    int a , b , c ,d ;
    cin >> a >> b >> c >> d;
    if (retangle(a,b,c) + retangle(a,c,d) + retangle(a,b,d) + retangle(b,c,d) > 0) {
        cout << "S" << endl ;
    } else {
        cout << "N" << endl ;
    }
    return 0;
}