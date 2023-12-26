#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    string s ; cin >> s ;
    int n = s.length();
    for ( int i = 0 ; i < n ; i++){
        i+=1;
        if(s[i] == '1'){
            break;
        }
        s.erase(s.begin()+i);
    }
    cout << s << endl;
    return 0;
}