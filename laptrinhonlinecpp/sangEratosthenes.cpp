#include <iostream>
using namespace std;
int prime[1000000+1];
void sang(){
    fill(prime,prime+1000001,1);
    prime[0]=prime[1]=0;
    for ( int i = 2 ; i <= 10000 ; i++){
        if (prime[i]==1){
            for ( int j = i*i ; j <= 10000 ; j+=i){
                prime[j]=0;
            }
        }
    }
}
int main(){
    int t ; cin >> t ;
    sang();
    int a[10000];
    int b[10000];
    for ( int i = 0 ; i < t ; i++){
        cin >> a[i] >> b[i];
    }
    for ( int i = 0 ; i < t ; i++){
        int cnt = 0 ;
        for (int j = a[i] ; j <= b[i] ; j++){
            if(prime[j]){
                cnt++;
            }
        }
        cout << cnt << endl ;
    }
    return 0;
}