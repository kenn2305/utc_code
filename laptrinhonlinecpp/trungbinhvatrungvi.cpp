#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<pair<int,int>> a;
    int x , y ;
    while (cin >> x){
        cin >> y ;
        a.push_back(make_pair(x,y));
    }
    for ( int i = 0 ; i < a.size()-1 ; i++){
        if (a[i].first > a[i].second){
            swap(a[i].first,a[i].second);
        }
        cout << (a[i].first*3)-(a[i].first+a[i].second) << endl ;
    }
    return 0;
}