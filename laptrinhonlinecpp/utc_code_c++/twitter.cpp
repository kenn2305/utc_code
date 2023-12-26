#include <iostream>
#include <string>
using namespace std;
int main(){
    string s ;
    getline(cin ,s);
    if (s.length() > 140){
        cout << "MUTE" << endl ;
    } else {
        cout << "TWEET" << endl ;
    }

    return 0;
}