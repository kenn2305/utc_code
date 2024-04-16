#include <iostream>
#include <vector>
#include <cmath>
#include <set>
using namespace std;
int main(){
    int n ; cin >> n ;
    vector<int> a;
    for ( int i = 0 ; i < n ; ++i){
        int x ; cin >> x;
        a.push_back(x);
    }
    multiset<int> s;
    s.insert(a[0]);
    for ( int i = 1 ; i < n ; ++i){
        s.insert(a[i]);
        cout << max(abs(a[i]-*s.rbegin()),abs(a[i]-*s.begin())) << " ";
    }
    return 0;
}