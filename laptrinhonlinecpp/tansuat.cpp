#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int n ; cin >> n ;
    vector<int> a;
    a.reserve(n);
    for ( int i = 0 ; i < n ; i++){
        int x ; cin >> x;
        a.push_back(x);
    }
    sort(a.begin() , a.end());
    map<int,int> mp;
    for (auto it : a){
        mp[it]++;
    }
    for ( pair<int,int> it : mp){
        cout << it.first << " xuat hien " << it.second << " lan" << endl ;
    }
    return 0;
}