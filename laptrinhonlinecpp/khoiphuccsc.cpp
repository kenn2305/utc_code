#include <iostream>
#include <vector>
using namespace std;
int main(){
    int x ;
    vector<int> a;
    while (cin>> x){
        if (x == 0 ) break;
        a.push_back(x);
    }
    int n = (a[a.size()-1] / a[0]);
    cout << n - a.size() << endl ;
    return 0;
}