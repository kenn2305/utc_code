#include <iostream>
#include <vector>
using namespace std;
int check(int a , int b){
    return a < b ;
}
int main(){
    int x , y ;
    vector<int> a;
    vector<int> b;
    while (true){
        cin >> x >> y;
        if (x==y){
            break;
        }
        a.push_back(x);
        b.push_back(y);
    }
    for (int i = 0 ; i < a.size();i++){
        if (check(a[i],b[i])){
            cout << "Crescente" << endl ;
        } else {
            cout << "Decrescente" << endl ;
        }
    }
    return 0;
}