#include <iostream>
#include <vector>
using namespace std;
int main(){
    int x ;
    vector<int> a;
    while (cin >> x){
        a.push_back(x);
    }
    for ( int i = 0 ; i < a.size() ; i++){
        if (a[i] == 0){
            cout << "Khong khieu nai!" << endl ;
        } else {
            cout << "Co khieu nai!" << endl ;
        }
    }
    return 0;
}