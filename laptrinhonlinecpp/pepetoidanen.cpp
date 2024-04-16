#include <iostream>
#include <string>
using namespace std;
void res(int a , int b , int c){
    string k ;
    string s;
    k = to_string(a);
    s = to_string(b);
    if (k.size()==1){
        k = "0"+k;
    }
    if (s.size()==1){
        s = "0"+s;
    }
    if (c==0){
        cout << k << ":" << s << " - " << "Canh cua dong lai!" << endl ;
    } else if (c==1) {
        cout << k << ":" << s << " - " << "Canh cua mo ra!" << endl ;
    }
}
int main(){
    int t ; cin >> t;
    while (t--){
        int a , b , c ;
        cin >> a >> b >> c;
        res(a,b,c);
    }
    return 0;
}