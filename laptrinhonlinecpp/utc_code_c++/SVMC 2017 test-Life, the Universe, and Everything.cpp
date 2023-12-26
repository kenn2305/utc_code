#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> a;
    int x ;
    while (cin >> x){
        a.push_back(x);
    }
    for ( auto it : a){
        if (it == 42) break;
        cout << it << endl ;

    }
    return 0;
}