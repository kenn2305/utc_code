#include <iostream>
#include <string>
#include <vector>
using namespace std;
int check(string s){
    for ( int i = 0 ; i < s.size()-1 ; ++i){
        if ((s[i] == 0 && s[i+1]==1) || (s[i]==1 && s[i+1]==0 )){
            return 0;
        }
    }
    return 1;
}
int main(){
    string s;
    return 0;
}