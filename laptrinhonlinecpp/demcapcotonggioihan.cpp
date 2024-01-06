#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
long long solve_prob(vector<int> &a,int x){
    int l = 0 ;
    int r = a.size()-1;
    long long cnt = 0 ;
    while (r>l){
        if (a[l]+a[r] <= x){
            cnt+=(r-l);
            l++;
        } else {
            r--;
        }
    }
    return cnt ;
}
int main(){
    int n ; cin >> n ;
    int x ; cin >> x ;
    vector<int> a ;
    a.reserve(n);
    for ( int i = 0 ; i < n ; i++){
        int k ; cin >> k ;
        a.push_back(k);
    }
    sort(a.begin(),a.end());
    cout << solve_prob(a,x) << endl ;
    return 0;
}