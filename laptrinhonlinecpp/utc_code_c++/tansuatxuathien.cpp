#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n ; cin >> n ;
    vector<int> a ;
    for ( int i = 0 ; i < n ; i++){
        int x ; cin >> x ;
        a.push_back(x);
    }
    map<int , int> mp ;
    sort(a.begin(),a.end());
    for ( int i = 0 ; i < n ; i++){
        mp[a[i]]++;
    }

    for (pair<int,int> it:mp){
        cout << it.first << " " << it.second << endl ;
    }
    return 0;
}