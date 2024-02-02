#include <iostream>
#include <set>
#include <vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n , m ;
    cin >> n >> m ;
    vector<int> a;
    a.reserve(m);
    set<int> s;
    for ( int i = 0 ; i < n ; i++){
        int x ; cin >> x ;
        a.push_back(x);
    }
    int k = 0 ;
    int j = n ;
    set<int> res ;
    if (n==2&&m==2){
        cout << abs(a[0]-a[1] ) << endl ;
    }
    while (j<=m){
        for ( int i = k ; i < j ; i++){
            s.insert(a[i]);
        }
        if (s.size()==1){
            res.insert(*s.begin());
        } else {
            res.insert(*s.rbegin() - *s.begin());
        }
        s.clear();
        k++;
        j++;
    }
    cout << *res.begin() << endl ;
    return 0;
}