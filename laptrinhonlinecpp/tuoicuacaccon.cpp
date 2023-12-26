#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;
int cmp(pair<long long,int> a , pair<long long,int> b){
    return a.second < b.second;
}
int main(){
    int n ; cin >> n ;
    vector<long long> a;
    a.reserve(n);
    map<long long,int> mp;
    vector<pair<long long,int>> v;
    for ( int i = 0 ; i < n ; i++){
        long long x ; cin >> x;
        a.push_back(x);
    }
    for (auto it : a){
        mp[it]++;
    }
    for (pair<long long,int> it : mp){
        v.push_back(make_pair(it.first,it.second));
    }
    sort(v.begin() , v.end() , cmp);
    for (pair<long long,int> it : v){
        cout << it.first << " " ;
    }
    return 0;
}   