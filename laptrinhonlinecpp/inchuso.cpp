#include <iostream>
#include <map>
using namespace std;

map<char,string> save;
map<int,string> cnt;

void init(){
    save['1'] = "mot";
    save['2'] = "hai";
    save['3'] = "ba";
    save['4'] = "bon";
    save['5'] = "nam";
    save['6'] = "sau";
    save['7'] = "bay";
    save['8'] = "tam";
    save['9'] = "chin";

    cnt[2] = "muoi";
    cnt[3] = "tram";
}

void solve(int n){
    init();
    if (n == 1000){
        cout << "mot nghin" << endl ;
    } else {
        string s = to_string(n);

        if (s.size() == 1) {
            cout << save[s[0]] << endl;
        } else if (s.size() == 2) {
            if (s == "10") {
                cout << "muoi" << endl;
            } else {
                if (s[1] == '0') {
                    cout << save[s[0]] << " " << cnt[2] << endl;
                } else {
                    if (s[0] == '1') {
                        if (s[1] == '5') cout << cnt[2] << " " << "lam" << endl;
                        else cout << cnt[2] << " " << save[s[1]] << endl;
                    } else {
                        cout << save[s[0]] << " " << cnt[2] << " ";
                        if (s[1] == '5') cout << "lam" << endl;
                        else cout << save[s[1]] << endl;
                    }
                }
            }
        } else if (s.size() == 3) {
            if (s == "100") {
                cout << "mot tram" << endl;
            } else {
                if (s[1] == '0' && s[2] == '0') {

                    cout << save[s[0]] << " " << cnt[3] << endl;
                } else if (s[1] == '0' && s[2] != '0') {
                    cout << save[s[0]] << " " << cnt[3] << " " << "linh" << " " << save[s[2]] << endl;
                } else if (s[1] != '0' && s[2] == '0') {
                    if (s[1] == '1') {
                        cout << save[s[0]] << " " << cnt[3] << " " << "muoi" << endl;
                    } else {
                        cout << save[s[0]] << " " << cnt[3] << " " << save[s[1]] << " " << cnt[2] << endl;
                    }
                } else {
                    if (s[1] == '1') {
                        cout << save[s[0]] << " " << cnt[3] << " " << cnt[2] << " ";
                        if (s[2] == '5') cout << "lam" << endl;
                        else cout << save[s[2]] << endl;
                    } else {
                        cout << save[s[0]] << " " << cnt[3] << " " << save[s[1]] << " " << cnt[2] << " ";
                        if (s[2] == '5') cout << "lam" << endl;
                        else cout << save[s[2]] << endl;
                    }
                }
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int a , b ;
    cin >> a >> b ;
    for ( int i = a ; i <= b ; ++i){
        solve(i);
    }
    return 0;
}
