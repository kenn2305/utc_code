#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n ; cin >> n ;
    vector<int> a;
    a.reserve(n);
    for ( int i = 0 ; i< n ; i++){
        int x ; cin >> x ;
        a.push_back(x);
    }
    map<int,int> mp;
    for (auto it : a){
        mp[it]++;
    }
    for ( int i = 0 ; i < n ; i++){
        if (mp[a[i]]>1){
            cout << a[i] << " ";
            mp[a[i]]=0;
        } else if (mp[a[i]]==1){
            cout << a[i] << " ";
        }
    }
    return 0;
}