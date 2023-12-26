#include <iostream>
#include <vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<char> a;
    int n ; cin >> n;
    for ( int i = 0 ; i < n ; i++){
        char x ; cin >> x ;
        a.push_back(x);
    }
    int sum = 0 ;
    for (char it : a){
        if (it == 't'){
            sum+=1;
        } else if (it == 'M'){
            sum+=3;
        } else if (it == 'T'){
            sum+=3 ;
        } else if (it == 'X'){
            sum+=5 ;
        } else if (it == 'H'){
            sum+=9 ;
        } else if (it == 'V'){
            sum+=0;
        }
    }
    cout << sum << endl ;
    return 0;
}