#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    string s ; cin >> s ;
    vector<char> a;
    for ( int i = s.length()-1 ; i >= 0 ; i--){
        cout << s[i];
    }
    return 0;
}