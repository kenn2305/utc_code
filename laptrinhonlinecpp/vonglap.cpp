#include <iostream>
#include <string>
using namespace std;
int main(){
    string s ; cin >> s ;
    string k ;
    int i = 1 ;
    while (true){
        k = to_string(i) + k ;
        if (k == s){
            break;
        }
        i++;
    }
    cout << i << endl ;
    return 0;
}