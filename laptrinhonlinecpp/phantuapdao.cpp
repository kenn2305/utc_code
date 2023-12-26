#include <iostream>
#include <vector>
#include <map>
#include <cmath>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n ; cin >> n ;
    double k = n / 2.0 ;
    vector<int> a ;
    a.reserve(n);
    map<int,int> mp ;
    for ( int i = 0 ; i < n ; i++){
        int x ; cin >> x ;
        a.push_back(x);
    }
    for (auto it : a){
        mp[it]++;
    }
    bool check = true ;
    for (pair<int,int> it : mp){
        if (it.second > k){
            cout << it.first << endl ;
            check = false ;
        }
    }
    if (check == true){
        cout << "khong co phan tu ap dao" << endl ;
    }
    return 0;
}