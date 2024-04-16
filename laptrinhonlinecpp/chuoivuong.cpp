#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;
int check(vector<int> a){
    for ( int i = 0 ; i < a.size()-1 ; i++){
        if (a[i] != a[i+1]) return 0;
    }
    return 1;
}
void solve(string s){
    map<char,int> mp;
    for ( int i = 0 ; i < s.size() ; i++){
        mp[s[i]]++;
    }
    if (mp.size() == 1){
        for (auto it : mp){
            if (it.second % 2 == 0) {
                cout << "YES" << endl ;
            } else {
                cout << "N0" << endl ;
            }
        }
        return ;
    }
    vector<int> a;
    for (auto it : mp){
        a.push_back(it.second);
    }
    if (check(a)) cout << "YES" << endl ;
    else cout << "NO" << endl ;
}
int main(){
    int n ; cin >> n ;
    while (n--){
        string s ;
        cin >> s ;
        solve(s);
    }
    return 0;
}