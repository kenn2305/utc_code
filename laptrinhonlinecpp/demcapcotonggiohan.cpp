#include <iostream>
#include <map>
#include <vector>
#include <set>
using namespace std;
int main(){
    int n ; cin >> n ;
    vector<int> a;
    a.reserve(n);
    for ( int i = 0 ; i < n ; i++){
        int x ; cin >> x;
        a.push_back(x);
    }
    map<int,int> mp;
    for (auto it : a){
        mp[it]++;
    }

    return 0;
}