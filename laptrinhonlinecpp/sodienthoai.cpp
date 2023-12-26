#include <iostream>
#include <string>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s ; cin >> s;
    if(s.length() != 10){
        cout << "NO" << endl ;
        return 0;
    } else {
        for ( int i = 0 ; i < s.length() ; i++){
            if (s[i] < '0' || s[i] > '9'){
                cout << "NO" << endl ;
                return 0;
            }
        }
        if (s[0] != '0' || s[9] == '4' || s[9]=='7'){
            cout << "NO" << endl ;
            return 0;
        }
    }
    cout << "YES" << endl ;
    return 0;
}