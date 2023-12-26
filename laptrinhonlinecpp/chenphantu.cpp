#include <iostream>
#include <vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n ; cin >> n ;
    vector<int> a;
    for ( int i = 0 ; i < n ; i++){
        int x ; cin >> x;
        a.push_back(x);
    }
    int k ; cin >> k ;
    int x ; cin >> x;
    a.insert(a.begin()+k , x);
    for ( auto it : a){
        cout << it << " " ;
    }
    return 0;
}