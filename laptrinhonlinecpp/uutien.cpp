#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n ; cin >> n ;
    unordered_map<int,int> mp;
    for ( int i = 0; i < n ; i++){
        int x ; cin >> x ;
        mp[x]++;
    }
    vector<pair<int,int>> a(mp.begin(),mp.end());
    sort(a.begin(),a.end());
    int cnt = 0 ;
    for (auto it : a){
        cnt++;
        cout << it.first << " ";
        if (cnt== 3) break;
    }
    return 0;
}