#include <iostream>
#include <string>
using namespace std;
using ll = long long;

int res(string s) {
    ll resodd = 0;
    ll reseven = 0;
    for (int i = 0; i < s.length(); i++) {
        if (i % 2 == 0) {
            string k = "0";
            k += s[i];
            reseven += stoi(k);
        } else {
            string k = "0";
            k += s[i];
            resodd += stoi(k);
        }
    }
    return (reseven - resodd) % 11 == 0;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        if (res(s))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
