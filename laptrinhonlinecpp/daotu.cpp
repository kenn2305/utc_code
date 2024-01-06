#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    string s ;
    vector<string> a;
    while (cin >> s){
        a.push_back(s);
    }
    for ( int i = a.size()-1; i>=0;i--){
        cout << a[i] << " " ;
    }
    return 0;
}