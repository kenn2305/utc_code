#include <iostream>
#include <string>
using namespace std;
int mark_point = 0 ;
int real_var(string c){
    int res = 0 ;
    for ( int i = 0 ; i < c.length() ; ++i){
        if (c[i] == '+' || c[i] == '-'){
            mark_point = i;
            break;
        }
        res = res*10 + (c[i]-'0');
    }


    return res;
}
int virtual_var(string c){
    int res = 0 ;
    int oke = 1;
    for ( int i = mark_point+1 ; i < c.length() ; ++i){
        if (c[i] == '+' || c[i] == '-'){
        }
        if (c[i] >='0' && c[i] <= '9') {
            res = res * 10 + (c[i] - '0');
        }
    }
    if (c[mark_point+1] == 'i' && c[mark_point] == '+') {
        res = 1;
    } else if (c[mark_point+1] == 'i' && c[mark_point] == '-'){
        res = -1;
    } else if (c[mark_point+1] != 'i' && c[mark_point] == '-'){
        res*=-1;
    }
    return res;
}
void mul(int c1_real , int c1_vir , int c2_real , int c2_vir) {
    int real = c1_real * c2_real - c1_vir * c2_vir;
    int vir = c1_real * c2_vir + c1_vir * c2_real;
    if (real == 0 && vir == 0) {
        cout << "0";
        return;
    }
    string k = to_string(real) + "+" + to_string(vir) + "i";
    int find = 0;
    for (int i = 0; i < k.size(); ++i) {
        if (k[i] == '+') {
            find = i;
            break;
        }
    }
    string tmp = k.substr(find, k.size() - 1);
    if (k[find + 1] == '-') {
        k.erase(k.begin() + find + 1);
    }
    if (k[find + 1] == '0') {
        k = k.substr(0, find - 1);
    }
    if (k[0] == '0') {
        k = k.substr(find + 1, k.size() - 1);
    }
    if (tmp.size() == 3) {
        if (k[find + 1] == '1') {
            k.erase(k.begin() + (find + 1));
        }
    }
    cout << k << endl ;
}
int main(){
    string c1 ; string c2;
    cin >> c1 >> c2;
    int c1_real = real_var(c1);
    int c1_vir = virtual_var(c1);
    int c2_real = real_var(c2);
    int c2_vir = virtual_var(c2);
    mul(c1_real,c1_vir,c2_real,c2_vir);
    return 0;
}