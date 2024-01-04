#include <iostream>
#include <string>
using namespace std;
void check(string s){
    for ( int i = s.length()-1;i>=0;i--){
        if (s[i]=='1'){
            cout << i << endl ;
            return;
        }
    }
    cout << "-1" << endl ;
}
int main(){
    string s[100000] ;
    int n ; cin >> n ;
    for ( int i = 0 ; i < n ; i++){
        cin.ignore();
        cin >> s[i];
    }
    for ( int i = 0 ; i < n ; i++){
        check(s[i]);
    }
    return 0;
}