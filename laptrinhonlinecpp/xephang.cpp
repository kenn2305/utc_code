#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n ; cin >> n ;
    map<int,int> cnt;
    for ( int i = 0 ; i < n ; ++i){
        int x ; cin >> x ;
        ++cnt[x];
    }
    vector<pair<int,int>> top(cnt.begin(),cnt.end());
    reverse(top.begin(),top.end());
    int cnt_ = 1 ;
    for (auto it : top){
        if (cnt_ == 1){
            cout << "1st: " << it.second << endl ;
        } else if (cnt_ == 2){
            cout << "2nd: " << it.second << endl ;
        } else if (cnt_ == 3){
            cout << "3rd: " << it.second << endl ;
            break;
        }
        ++cnt_;
    }
    return 0;
}