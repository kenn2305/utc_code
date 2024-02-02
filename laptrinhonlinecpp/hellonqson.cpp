#include <iostream>
#include <string>
using namespace std;
void solve(string s){
    string k ;
    int c=0;
    for ( int i = 0 ; i < s.length() ; i++){
        if (s[i] >= 'A' && s[i] <= 'Z'){
            s[i]+=32;
        }
    }
    k+=s[0];
    bool check = true ;
    for ( int i = 0 ; i < s.length() ; i++){
        if (s[i] == ' '){
            k+=s[i+1];
            c = i+1;
            check = false;
        }
    }
    for (int i = c+1 ; i < s.length() ; i++){
        k+=s[i];
    }
    cout << "hello " << k << endl ;
}
int main(){
    int t; cin >> t ;
    cin.ignore();
    while(t--){
        string n ;
        getline(cin,n);
        solve(n);
    }
    return 0;
}