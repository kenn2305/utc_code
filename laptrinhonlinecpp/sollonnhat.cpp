#include <iostream>
#include <vector>
#include <set>
using namespace std;
int main(){
    int n , m ;
    cin >> n >> m ;
    vector<int> a(n);
    multiset<int> s ;
    for ( int i = 0 ; i < n ; i++){
        cin >> a[i] ;
        s.insert(a[i]);
    }
    while (m--){
        int x ; cin >> x ;
        x--;
        s.erase(s.find(a[x]));
        a[x]*=-1;
        s.insert(a[x]);
        cout << *s.rbegin() << " " ;
    }
    return 0;
}