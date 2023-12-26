#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n ; cin >> n ;
    vector<pair<int,int>> a ;
    for ( int i = 0 ; i < n ; i++){
        int x , y ;
        cin >> x >> y ;
        a.push_back(make_pair(x,y));
    }
    map<pair<int,int>,int> mp;
    for (pair<int,int> it : a){
        mp[it]++;
    }
    for (pair<pair<int,int> , int> it : mp){
        if (it.second > 1){
            cout << "YES" << endl ;
            return 0;
        }
    }
    cout << "NO" << endl ;
    return 0;
}