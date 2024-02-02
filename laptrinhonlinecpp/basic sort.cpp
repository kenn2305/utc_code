#include <iostream>
#include <set>
using namespace std;
int main(){
    int a[3];
    multiset<int> s;
    for ( int i = 0 ; i < 3 ; i++){
        cin >> a[i];
        s.insert(a[i]);
    }
    for (auto it : s){
        cout << it << endl ;
    }
    for (auto it : a){
        cout << it << endl ;
    }
    return 0;
}