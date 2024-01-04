#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int cmp(string a , string b){
    return a[0] < b[0];
}
int main(){
    int n ; cin >> n ;
    vector<string> a;
    int child1 = 0 ;
    int child2 = 0 ;
    for ( int i = 0 ; i < n ; i++){
        char k ; cin >> k ;
        string s; cin >> s;
        a.push_back(s);
        if (k=='+'){
            child1++;
        } else {
            child2++;
        }
    }
    cout << "Tong so tre ngoan: " << child1 << " | " << "Tong so tre hu: " << child2 << endl ;
    sort(a.begin(),a.end(),cmp);
    for ( int i = 0 ; i < n ; i++){
        cout << a[i] << endl ;
    }
    return 0;
}