#include <iostream>
#include <string>
using namespace std;
int firstNum(string a){
    string z ;
    for ( int i = 0 ; i < 3 ; i++){
        z = "0" + a[0];
    }
    int k = stoi(z);
    return k;
}
int main(){
    string a , b , c;
    cin >> a >> b >> c ;
    int d = firstNum(a);
    int e = firstNum(b);
    int f = firstNum(c);
    int MAX = (max(max(d,e),f));
    string k ;
    if (MAX == d){
        k = a;
    } else if (MAX == e){
        k = b ;
    } else if (MAX == f){
        k = c;
    }
    cout << k << endl;
    return 0;
}