#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    if (s[8] == 'A') {
        s.erase(s.length() - 2, 2);
       if (s[0]=='1'&&s[1]=='2'){
           s[0]='0';
           s[1]='0';
       }

    } else {
        if (s[0]=='1'&&s[1]=='2') {
            s.erase(s.length() - 2, 2);
        }else {
            int k = stoi(s.substr(0, 2)) + 12;
            s = to_string(k) + s.substr(2);
            s.erase(s.length() - 2, 2);
        }
    }

    cout << s << endl;

    return 0;
}
