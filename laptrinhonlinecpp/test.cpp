#include <string>
#include <iostream>
using namespace std;
int main(){
    string s ;
    s = "password";
    int c = 0;
    do {
        string k ;
        if ( k != s) {
            c++;
        } else {
            cout << "You are alright" << endl ;
            break;
        }
        if (c == 3){
            break;
        }
    } while (getline(cin,k));
    return 0;
}