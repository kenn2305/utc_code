#include <iostream>
#include <set>
#include <vector>
using namespace std;
int main(){
    vector<int> a;
    set<int> s;
    a.reserve(100);
    for ( int i = 0 ; i < 100 ; i++){
        int x ; cin >> x;
        a.push_back(x);
        s.insert(x);
    }
    for ( int i = 0 ; i < 100 ; i++){
        if (a[i]==*s.rbegin()){
            cout << *s.rbegin() << endl <<i+1 << endl ;
            break;
        }
    }

    return 0;
}