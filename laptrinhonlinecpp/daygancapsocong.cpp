#include <iostream>
#include <vector>
using namespace std;
void check(vector<int> a){
    int pos = 0 ;
    int test = 1;
    int cnt = 0 ;
    int d = a[1]-a[0];
    for ( int i = 0 ; i < a.size()-1 ; i++){
        if (a[i+1]-a[i]==d){
            cnt++;
        }
    }
    if (cnt == a.size()-1){
        cout << "Day la day cap so cong" << endl ;
    } else if(cnt == 1){
        cout << "Day khong la day gan cap so cong" << endl ;
    } else if (cnt < a.size()-1 && cnt != 1){
        for ( int i = 0 ; i < a.size()-1 ; i++){
            if (a[i+1]-a[i] != d){
                pos = i+1;
                break;
            }
        }
        cout << "Day la gan cap so cong tai vi tri " << pos+1 << endl;
    }
}
int main(){
    int n ; cin >> n ;
    vector<int> a;
    for (int i = 0 ; i < n ; i++){
        int x ; cin >> x;
        a.push_back(x);
    }
    check(a);
    return 0;
}