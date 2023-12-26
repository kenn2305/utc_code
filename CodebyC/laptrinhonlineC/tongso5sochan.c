#include <stdio.h>
#include <stdlib.h>
typedef long long ll ;
ll res(int n){
    if (n % 2 != 0){
        n+=1;
    }
    ll sum = 0 ;
    int cnt = 1 ;
    while (cnt <= 5){
        sum+=n ;
        n+=2;
        cnt++;
    }
    return sum ;
}
int main(){
    int x ;
    int a[1000];
    int n = 0 ;
    for ( int i = 0 ; ; i++){
        scanf("%d",&x);
        if (x == 0){
            break;
        }
        a[i] = x ;
        n++;
    }
    for ( int i = 0 ; i < n ; i++){
        printf("%lld\n", res(a[i]));
    }
    return 0;
}