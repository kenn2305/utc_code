#include <iostream>
#include <string>
using namespace std;
bool check(string s){
    return s.length() >= 3;
}
int solve(string s){
    string k;
    k = s[0];
    k+= s[s.length()-1];
    if (stoi(s) % stoi(k) == 0){
        return 1 ;
    }
    return 0;
}
int main(){
    int t ; cin >> t ;
    while (t--){
        string s ; cin >> s;
        if (!check(s)) {
            cout << "NO" << endl ;
        } else {
            if (solve(s)) cout << "YES" << endl;
            else cout << "NO" << endl ;
        }
    }
    return 0;
}