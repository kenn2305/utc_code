#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cin >> s;
    long long sum = 0 ;
    for (int i = 0 ; i < s.size() ; i++){
        int tmp = stoi("0"+s[i]);
        sum += tmp ;
    }
    return 0;
}