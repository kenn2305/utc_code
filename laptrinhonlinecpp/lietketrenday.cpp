#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int check(vector<int> a){
    int d = a[1]-a[0];
    for ( int i = 0 ; i < a.size()-1;i++){
        if (a[i+1]-a[i] != d){
            return 0;
        }
    }
    return 1 ;
}
void odd_num(int n , vector<int> a){
    bool check = true;
    for ( auto it : a){
        if (it % 2 != 0){
            cout << it << " " ;
            check = false;
        }
    }
    if (check == true){
        cout << "Day khong co so le" ;
    }
}
void sep_num(int n , vector<int> a){
    int check = 1 ;
    for (auto it : a){
        if ((it % 5 + 5) % 5 == 2 || (it % 7 + 7) % 7 == 3){
            cout << it << " " ;
            check =  0;
        }
    }
    if (check == 1){
        cout << "Day khong co so chia nam du hai hoac chia bay du ba" ;
    }
}
void csc(int n , vector<int> a){
    int first = 0 ;
    int last = 3 ;
    vector<int> ken ;
    int chec = 1;
    while (last <= n)
    {
        for ( int i = first ; i < last ; i++){
            ken.push_back(a[i]);
        }
        if (check(ken)){
            for (auto it : ken){
                cout << it << " " ;
            }
            chec = 0 ;
        }
        first+=1 ;
        last+=1 ;
        ken.clear();
        cout << endl ;
    }
    if (chec == 1){
        cout << "Day khong co bo ba lien tiep cap so cong" << endl ;
    }
}
int main(){
    int n ; cin >> n ;
    vector<int> a;
    a.reserve(n);
    for ( int i =  0; i < n ; i++){
        int x ; cin >> x ;
        a.push_back(x);
    }
    odd_num(n,a);
    cout << endl ;
    sep_num(n,a);
    cout << endl ;
    csc(n,a);
    return 0;
}