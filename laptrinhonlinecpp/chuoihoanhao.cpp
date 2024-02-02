#include <iostream>
#include <map>
using namespace std;
bool check_map(map<char,int> a){
    for (auto it : a){
        if (it.second % 2 != 0){
            return false;
        }
    }
    return true;
}
int main(){
    string s ; cin >> s ;
    map<char,int> mp;
    for ( int i = 0 ; i < s.length(); i++){
        mp[s[i]]++;
    }
    if (check_map(mp)){
        cout << "Yes" << endl ;
    } else {
        cout << "No" << endl;
    }
    return 0;
}