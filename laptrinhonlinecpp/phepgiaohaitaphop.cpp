#include <iostream>
#include <set>
#include <vector>
using namespace std;
int main(){
    int n , m;
    vector<int> a;
    vector<int> b;
    set<int> s;
    set<int> s2;
    a.reserve(n);
    b.reserve(m);
    cin >> n ;
    for ( int i = 0 ; i < n ; i++){
        int x ; cin >> x ;
        a.push_back(x);
        s.insert(x);
    }
    cin >> m ;
    for ( int i = 0 ; i < m ; i++){
        int x ; cin >> x ;
        b.push_back(x);
        s2.insert(x);
    }
    set<int> res;
    for ( int i = 0 ; i < n ; i++){
        auto it = s2.find(a[i]);
        if (it != s2.end()){
            res.insert(a[i]);
        }
    }
    for (auto it : res){
        cout << it << " " ;
    }
    return 0;
}