#include <iostream>
#include <map>
#include <set>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n ; cin >> n ;
    map<int,int> mp;
    for ( int i = 0 ; i < n ; i++){
        int x ; cin >> x;
        mp[x]++;
    }
    set<int> s;
    for (auto it : mp){
        s.insert(it.second);
    }
    cout << *s.rbegin() << endl ;
    for (auto it : mp){
        if (it.second == *s.rbegin()){
            cout << it.first << " " ;
        }
    }
    return 0;
}