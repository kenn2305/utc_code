#include <iostream>
#include <vector>
using namespace std;
int main(){
    int x;
    vector<int> a;
    while (cin >> x){
        a.push_back(x);
    }
    for (auto it : a){
        if (it == 2002){
            cout << "Duoc phep truy cap" << endl ;
        } else {
            cout << "Sai mat khau" << endl ;
        }
    }
    return 0;
}