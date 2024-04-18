#include <iostream>
#include <string>
using namespace std;
char convert(char a , int k){
    if (a + k > 90){
        return char((a+k)-26);
    }
    return char(a+k);
}
string solve_change(string s , int k){
    for ( int i = 0 ; i < s.size() ; ++i){
        s[i] = convert(s[i],k);
    }
    return s;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int k ; cin >> k;
    string s ; cin >> s;
    cout << k << '\n' << solve_change(s,k) ;
    return 0;
}