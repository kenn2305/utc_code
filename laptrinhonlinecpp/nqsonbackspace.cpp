#include <iostream>
#include <map>
#include <vector>
#include <string>
using namespace std;
map<char,int> save;
vector<char> res;
string s;
void Input_(string &s){
    getline(cin,s);
}
void solve(string &s){
    int cnt = 0 ;
    int pos = 0 ;
    string k =  s;
    for ( int i = 0 ; i < s.size(); ++i){
        if (s[i] == '#'){
            pos = i;
        }
        while (true){
            if (s[pos] == '#') cnt++;
            else break;
        }
        for ( int k = pos ; k >= cnt ; ++k){
            
        }
    }
}
int main(){
    return 0;
}