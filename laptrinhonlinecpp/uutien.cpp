#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n ; cin >> n ;
    vector<int> a ;
    a.reserve(n);
    for ( int i = 0 ; i < n ; i++){
        int x ; cin >> x ;
        a.push_back(x);
    }
    map<const int , int > mp;
    for ( auto it : a){
        mp[it]++;
    }
    auto Frequency = max_element(mp.begin() , mp.end() , [](auto &a , auto &b){
        return a < b ;
    });
    for ( pair <int,int> it : mp){
        cout << it.first << " " << it.second << endl ;
    }
    return 0;
}