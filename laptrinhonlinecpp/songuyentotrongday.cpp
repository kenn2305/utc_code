#include <iostream>
using namespace std;
int prime[100000+1];
void seive(){
    fill(prime,prime+100000+1,1);
    prime[0]=prime[1]=0;
    for ( int i = 2 ; i*i <= 100000 ; i++){
        if(prime[i]==1){
            for ( int j = i*i;j <= 100000 ; j+=i){
                prime[j]=0;
            }
        }
    }
}
int main(){
    int n ; cin >> n ;
    int a[10000];
    seive();
    for ( int i = 0 ; i < n; i++){
        cin >> a[i];
    }
    for ( int i = 0 ; i < n ; i++){
        if (prime[a[i]]){
            cout << a[i] << " " ;
        }
    }
    return 0;
}