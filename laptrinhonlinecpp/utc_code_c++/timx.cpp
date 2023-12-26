#include <iostream>
#include <cmath>
using namespace std;
int main(){
    string s ; cin >> s;
    if (s[0] != 'x'){
        string k = s;
        string f = s;
        for ( int i = 0 ; i < s.length()-1 ; i++){
            s[i] = '0';
        }
        int b = stoi(s);
        for ( int i = 1 ; i < s.length() ; i++){
            k[i] = ' ' ;
        }
        int a = stoi(k);
        if (f[1] == '-' && (b-a) <= 0){
            cout << "x=" << abs(b-a) << endl ;
        } else if (f[1] == '-' && (b-a) > 0){
            cout << "Khong tim duoc x" << endl ;
        } else if (f[1] == '+' && (b-a) >= 0){
            cout << "x=" << (b-a) << endl ;
        } else if (f[1] == '+' && (b-a) < 0){
            cout << "Khong tim duoc x" << endl ;
        }
    } else {
        string k = s;
        string f = s;
        for ( int i = 0 ; i < s.length()-1 ; i++){
            s[i] = '0';
        }
        int b = stoi(s);
        for ( int i = 0 ; i < 2 ; i++){
            k[i] = '0';
        }
        for ( int i = 3 ; i < s.length() ; i++){
            k[i] = ' ';
        }
        int a = stoi(k);
        if (f[1] == '-'){
            cout << "x=" << b+a << endl ;
        } else if (f[1] == '+' && b-a < 0){
            cout << "Khong tim duoc x" << endl ;
        } else if (f[1] == '+' && b-a >= 0){
            cout << "x=" << b-a << endl;
        }
    }
    return 0;
}