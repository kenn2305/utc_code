#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;
using ll = unsigned long long ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    unordered_map<ll,int> mp;
    int n ; cin >> n ;
    for (int i = 0 ; i < n ; ++i){
        ll x; cin >> x ;
        ++mp[x];
    }
    vector<pair<ll,int>> a(mp.begin(),mp.end());
    sort(a.begin(),a.end(),[](const pair<ll,int> &a , const pair<ll,int> &b){
        if (a.second == b.second){
            return a.first < b.first;
        } else return a.second < b.second;
    });
    for (auto it : a){
        cout << it.first << " " ;
    }
    return 0;
}