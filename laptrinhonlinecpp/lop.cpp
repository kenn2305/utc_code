#include <iostream>
#include <set>
#include <map>
using namespace std;
int main(){
    int n ; cin >> n ;
    map<int,int> mp;
    set<int> s;
    for ( int i = 0 ; i < n ; i++){
        int x ; cin >> x ;
        mp[x]++;
    }
    for(auto it : mp){
        s.insert(it.second);
    }
    int res = 0 ;
    for ( auto it : mp){
        if (it.second == *s.rbegin()){
            res = it.first;
        }
    }
    cout << res << endl ;
    return 0;
}