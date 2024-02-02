#include <iostream>
#include <set>
using namespace std;
int main(){
    int n ; cin >> n ;
    multiset<int> a ;
    for ( int i = 0 ; i < n ; i++){
        int x ; cin >> x ;
        a.insert(x);
    }
    int m ; cin >> m ;
    set<int> z ;
    for ( int i = 0 ; i < m ; i++){
        int x ; cin >> x ;
        auto it = a.find(x);
        if (it == a.end()){
            z.insert(x);
        } else {
            a.erase(it);
        }

    }
    for (auto it : z){
        cout << it << " " ;
    }
    return 0;
}