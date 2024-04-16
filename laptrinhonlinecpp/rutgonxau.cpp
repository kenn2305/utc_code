#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    int n ; cin >>  n ;
    vector<char>s;
    vector<char> a;
    for (int i = 0 ; i < n ; i++){
        char k ; cin >> k ;
        s.push_back(k);
    }
    a.push_back(s[0]);
    for ( int i = 0 ; i < s.size()-1 ; i++){
        if (s[i] != s[i+1]){
            a.push_back(s[i+1]);
        }
    }
    for (auto it : a){
        cout << it ;
    }
    return 0;
}