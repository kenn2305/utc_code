#include <string>
#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    int sum = 0;
    for (int i = 0; i < s.size(); i++) {
        string k = "00";
        while (i < s.size() && s[i] != '+') {
            k += s[i];
            i++;
        }
        sum += stoi(k);
    }

    cout << sum << endl;
    return 0;
}
